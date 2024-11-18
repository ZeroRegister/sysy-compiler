import pandas as pd
import matplotlib.pyplot as plt
import os

def plot_compile_and_run_times(my_csv_file, gcc_o1_csv_file, gcc_o2_csv_file):

    my_data = pd.read_csv(my_csv_file)
    gcc_o1_data = pd.read_csv(gcc_o1_csv_file)
    gcc_o2_data = pd.read_csv(gcc_o2_csv_file)

    # 这里的单位都是ms
    compile_time_my = my_data['compile_time'].str[:-2].astype(int)
    compile_time_gcc_o1 = gcc_o1_data['compile_time'].str[:-2].astype(int)
    compile_time_gcc_o2 = gcc_o2_data['compile_time'].str[:-2].astype(int)
    run_time_my = my_data['run_time'].str[:-2].astype(int)
    run_time_gcc_o1 = gcc_o1_data['run_time'].str[:-2].astype(int)
    run_time_gcc_o2 = gcc_o2_data['run_time'].str[:-2].astype(int)

    # 这里的单位都是us
    total_time_my = my_data['total_time'].astype(int)
    total_time_gcc_o1 = gcc_o1_data['total_time'].astype(int)
    total_time_gcc_o2 = gcc_o2_data['total_time'].astype(int)

    num_grops = len(compile_time_my) // 20 + 1
    print(num_grops)
    bar_width = 0.25

    output_folder = os.path.dirname(os.path.abspath(__file__))

    for group_num in range(num_grops):
        start_idx = group_num * 20
        end_idx = (group_num + 1) * 20
        print(f'start_idx: {start_idx}, end_idx: {end_idx}')
        if end_idx > len(compile_time_my):
            end_idx = len(compile_time_my)-1
            print(end_idx)
        # 编译时间柱状图
        plt.figure(figsize=(12, 6))

        plt.bar(
            range(end_idx-start_idx),
            compile_time_my[start_idx:end_idx],
            width=bar_width,
            label='Our Compiler Compile Time'
        )
        plt.bar(
            [i + bar_width for i in range(end_idx-start_idx)],
            compile_time_gcc_o1[start_idx:end_idx],
            width=bar_width,
            label='GCC -O1 Compiler Compile Time'
        )
        plt.bar(
            [i + 2 * bar_width for i in range(end_idx-start_idx)],
            compile_time_gcc_o2[start_idx:end_idx],
            width=bar_width,
            label='GCC -O2 Compiler Compile Time'
        )

        plt.xlabel('Data Index in Group')
        plt.ylabel('Compile Time (ms)')
        plt.title(f'Compile Time Comparison - Group {group_num + 1}')
        plt.xticks([i + bar_width for i in range(end_idx-start_idx)], range(start_idx + 1, end_idx + 1))
        plt.legend()

        output_path_compile = os.path.join(output_folder, f'compile_time_group_{group_num + 1}.png')
        plt.savefig(output_path_compile)
        plt.close()

        # 运行时间柱状图
        plt.figure(figsize=(12, 6))

        plt.bar(
            range(end_idx-start_idx),
            run_time_my[start_idx:end_idx],
            width=bar_width,
            label='Our Compiler Run Time'
        )
        plt.bar(
            [i + bar_width for i in range(end_idx-start_idx)],
            run_time_gcc_o1[start_idx:end_idx],
            width=bar_width,
            label='GCC -O1 Compiler Run Time'
        )
        plt.bar(
            [i + 2 * bar_width for i in range(end_idx-start_idx)],
            run_time_gcc_o2[start_idx:end_idx],
            width=bar_width,
            label='GCC -O2 Compiler Run Time'
        )

        plt.xlabel('Data Index in Group')
        plt.ylabel('Run Time (ms)')
        plt.title(f'Run Time Comparison - Group {group_num + 1}')
        plt.xticks([i + bar_width for i in range(end_idx-start_idx)], range(start_idx + 1, end_idx + 1))
        plt.legend()

        output_path_run = os.path.join(output_folder, f'run_time_group_{group_num + 1}.png')
        plt.savefig(output_path_run)
        plt.close()

        # 总时间柱状图
        plt.figure(figsize=(12, 6))

        plt.bar(
            range(end_idx-start_idx),
            total_time_my[start_idx:end_idx],
            width=bar_width,
            label='Our Compiler Total Time'
        )
        plt.bar(
            [i + bar_width for i in range(end_idx-start_idx)],
            total_time_gcc_o1[start_idx:end_idx],
            width=bar_width,
            label='GCC -O1 Compiler Total Time'
        )
        plt.bar(
            [i + 2 * bar_width for i in range(end_idx-start_idx)],
            total_time_gcc_o2[start_idx:end_idx],
            width=bar_width,
            label='GCC -O2 Compiler Total Time'
        )

        plt.xlabel('Data Index in Group')
        plt.ylabel('Total Time (us)')
        plt.title(f'Total Time Comparison - Group {group_num + 1}')
        plt.xticks([i + bar_width for i in range(end_idx-start_idx)], range(start_idx + 1, end_idx + 1))
        plt.legend()
        
        output_path_total = os.path.join(output_folder, f'total_time_group_{group_num + 1}.png')
        plt.savefig(output_path_total)
        plt.close()

if __name__ == "__main__":
    my_csv_file ='/root/sysy-compiler/utils/evaluation/analysis/result/my_p_result.csv'
    gcc_o1_csv_file = '/root/sysy-compiler/utils/evaluation/analysis/result/gcc_p_o1_result.csv'
    gcc_o2_csv_file = '/root/sysy-compiler/utils/evaluation/analysis/result/gcc_p_o2_result.csv'
    plot_compile_and_run_times(my_csv_file, gcc_o1_csv_file, gcc_o2_csv_file)
