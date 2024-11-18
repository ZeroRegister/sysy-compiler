import evaluator as eva
import os
import subprocess

def compile_c(sysy_path: str) -> None:
    """
    使用gcc编译文件，并将编译结果保存到相应的 `.s` 文件中
    """

    # 编译
    eva.setcwd("")
    file_name = eva.get_file_name(sysy_path)
    sysy_path = eva.get_abs_path(sysy_path)
    asm_path = os.path.join(eva.get_out_dir(), f"{file_name}.s")
    ir_path = os.path.join(eva.get_out_dir(), f"{file_name}.ll")
    log_path = os.path.join(eva.get_out_dir(), f"{file_name}.log")

    print(f'asm_path: {asm_path}')
    print(f'sysy_path: {sysy_path}')
    # 使用 subprocess.run 来执行命令并捕获输出
    args = [
        "riscv64-linux-gnu-gcc",
        "-S",
        "-o",
        asm_path,
        sysy_path,
        "-O1",
    ]
    result = subprocess.run(args=args, capture_output=True, text=True)
    print(result)
    print()

    # 汇编
    link_path = os.path.join(eva.get_root_dir(), 'sysy_runtime')
    result = subprocess.run(
        [
            "riscv64-linux-gnu-gcc",
            asm_path,
            "-o",
            os.path.join(eva.get_out_dir(), f"{file_name}.bin"),
            f"-L{link_path}",
            "-lsysy",
        ],
        capture_output=True,
        text=True,
    )
    print(result)

    

compile_c('/root/sysy-compiler/test_cases/functional_c/00_main.c', )