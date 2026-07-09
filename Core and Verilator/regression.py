#!/usr/bin/env python3
import os
import subprocess
import sys
from pathlib import Path

# ---------------- CONFIGURATION ----------------
TEST_LIST = os.environ.get("TEST_LIST",
    "riscv_arithmetic_basic_test riscv_loop_test riscv_rand_jump_test riscv_jump_stress_test riscv_mmu_stress_test"
).split()

ITERATIONS = int(os.environ.get("ITERATIONS", "1"))

SIM_BIN = "./obj_dir/Vtb_top"
RAW_LOG = "trace_core_00000001.log"

CORE_TO_CSV = "scripts/core_log_to_trace_csv.py"
COMPARE_CSV = "scripts/instr_trace_compare.py"

RESULTS_DIR = Path("results")
RESULTS_DIR.mkdir(exist_ok=True)
# ------------------------------------------------

# Stats
total_runs = 0
passed_runs = 0
failed_runs = 0

def run_cmd(cmd, check=True):
    """Run a shell command and optionally check for errors."""
    print(f"[CMD] {' '.join(cmd)}")
    result = subprocess.run(cmd)
    if check and result.returncode != 0:
        return False
    return True

def run_test(test_name, idx):
    global total_runs, passed_runs, failed_runs
    total_runs += 1

    print(f"\n=== Running {test_name} iteration {idx} ===")

    # Create subfolder for this test
    test_results_dir = RESULTS_DIR / test_name
    test_results_dir.mkdir(parents=True, exist_ok=True)

    # 1. Run simulation
    if not run_cmd([SIM_BIN, f"+TEST={test_name}", f"+IDX={idx}"]):
        print(f"[FAIL] Simulation failed for {test_name} iter {idx}")
        failed_runs += 1
        return

    # 2. Move raw log to test subfolder
    log_dest = test_results_dir / f"iter{idx}.log"
    if os.path.exists(RAW_LOG):
        os.rename(RAW_LOG, log_dest)
    else:
        print(f"[ERROR] Log file {RAW_LOG} not found!")
        failed_runs += 1
        return

    # 3. Convert log to CSV in same subfolder
    csv_dest = test_results_dir / f"iter{idx}.csv"
    if not run_cmd([
        "python3", CORE_TO_CSV,
        "--log", str(log_dest),
        "--csv", str(csv_dest)
    ]):
        print(f"[FAIL] CSV conversion failed for {test_name} iter {idx}")
        failed_runs += 1
        return

    # 4. Compare with Spike reference
    ref_csv = f"tests/{test_name}/spike_trace_{idx}.csv"
    if run_cmd([
        "python3", COMPARE_CSV,
        "--csv_file_1", ref_csv,
        "--csv_file_2", str(csv_dest),
        "--csv_name_1", "spike",
        "--csv_name_2", "core"
    ], check=False):
        print(f"[PASS] {test_name} iter {idx}")
        passed_runs += 1
    else:
        print(f"[FAIL] {test_name} iter {idx}")
        failed_runs += 1

def main():
    for test in TEST_LIST:
        for idx in range(ITERATIONS):
            run_test(test, idx)

    # Summary
    print("\n=== Regression Summary ===")
    print(f"Total runs : {total_runs}")
    print(f"Passed     : {passed_runs}")
    print(f"Failed     : {failed_runs}")

if __name__ == "__main__":
    main()
