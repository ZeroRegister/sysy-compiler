from math import e
import pandas as pd
import matplotlib.pyplot as plt
import os

def compare_compile_and_run_times(my_csv_file, gcc_o1_csv_file, gcc_o2_csv_file):
    """
    性能得分。满分100分，基于决赛阶段给出的性能测试用例计算，以GCC7.5.0 版本的O2优化运行时间为基准。
    参赛队在单个性能用例的得分为：100 * （GCC编译用例运行时间/参赛队用例运行时间）。
    性能总分为所用性能用例得分的几何平均值。

    性能用例中，总共有58个用例（0~57）
    在这里只对比total_time，即编译时间和运行时间之和。
    """

    # 读取my编译器的结果数据
    my_data = pd.read_csv(my_csv_file)
    # 读取gcc -O1编译器的结果数据
    gcc_o1_data = pd.read_csv(gcc_o1_csv_file)
    # 读取gcc -O2编译器的结果数据
    gcc_o2_data = pd.read_csv(gcc_o2_csv_file)

    total_time_my = my_data['total_time'].astype(int)
    total_time_gcc_o1 = gcc_o1_data['total_time'].astype(int)
    total_time_gcc_o2 = gcc_o2_data['total_time'].astype(int)

    num_groups = len(total_time_my) // 30 + 1
    print(num_groups)
    
    bar_width = 0.25

    output_folder = os.path.dirname(os.path.abspath(__file__))

    # 这里同样绘制柱状图，但是每个值表示的是socre1=total_time_gcc_o1/total_time_my 和 score2=total_time_gcc_o2/total_time_my
    # 如果score1和score2都大于1，则说明my编译器的性能更好，直接记该用例为满分100分，剩下的用例同理。
    
    start_idx = 0
    end_idx = 57
    if end_idx > len(total_time_my):
        end_idx = len(total_time_my)-1

    print(f'start_idx: {start_idx}, end_idx: {end_idx}')

    # 性能得分计算
    score1 = total_time_gcc_o1[start_idx:end_idx] / total_time_my[start_idx:end_idx]
    score2 = total_time_gcc_o2[start_idx:end_idx] / total_time_my[start_idx:end_idx]
    # 算数平均值
    score1_sum = 0
    score2_sum = 0
    for i in range(len(score1)):
        score1_sum += score1[i]
        score2_sum += score2[i]
    score1_sum = score1_sum / 58 * 100
    score2_sum = score2_sum / 58 * 100
    print('score1_sum:', score1_sum)
    print('score2_sum:', score2_sum)

    score1[score1 > 1] = 1
    score2[score2 > 1] = 1
    score1 = score1 * 100
    score2 = score2 * 100
    print('score1:', score1)
    print('score2:', score2)
    print(f'score1.len:{len(score1)}')
    print(f'score2.len:{len(score2)}')
    

    # 性能得分柱状图 score1
    plt.figure(figsize=(16, 6))

    plt.bar(
        range(len(score1)),
        score1,
        width=bar_width,
        label='GCC -O1 Compiler Performance Score'
    )

    plt.xlabel('Data Index in Group')
    plt.ylabel('Performance Score')
    plt.title(f'Performance Score Comparison - Group')
    # 这里的第一个参数是x轴的刻度，第二个参数是x轴的标签
    plt.xticks(len(score1), range(score1))
    plt.legend()

    output_path_score = os.path.join(output_folder, f'performance_score_group_o1.png')
    plt.savefig(output_path_score)
    plt.close()

    # 性能得分柱状图 score2
    plt.figure(figsize=(20, 6))

    plt.bar(
        range(len(score2)),
        score2,
        width=bar_width,
        label='GCC -O2 Compiler Performance Score'
    )

    plt.xlabel('Data Index in Group')
    plt.ylabel('Performance Score')
    plt.title(f'Performance Score Comparison - Group')
    plt.xticks(range(len(score2)), range(score2))
    plt.legend()
    
    output_path_score = os.path.join(output_folder, f'performance_score_group_o2.png')
    plt.savefig(output_path_score)
    plt.close()


    
if __name__ == "__main__":
    my_csv_file ='/root/sysy-compiler/utils/evaluation/analysis/result/my_p_result.csv'
    gcc_o1_csv_file = '/root/sysy-compiler/utils/evaluation/analysis/result/gcc_p_o1_result.csv'
    gcc_o2_csv_file = '/root/sysy-compiler/utils/evaluation/analysis/result/gcc_p_o2_result.csv'
    compare_compile_and_run_times(my_csv_file, gcc_o1_csv_file, gcc_o2_csv_file)
