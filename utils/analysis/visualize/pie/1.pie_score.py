import pandas as pd
import matplotlib.pyplot as plt
import os
import numpy as np

def pie(my_csv_file, gcc_o1_csv_file, gcc_o2_csv_file):
    # 读取my编译器的结果数据
    my_data = pd.read_csv(my_csv_file)
    # 读取gcc -O1编译器的结果数据
    gcc_o1_data = pd.read_csv(gcc_o1_csv_file)
    # 读取gcc -O2编译器的结果数据
    gcc_o2_data = pd.read_csv(gcc_o2_csv_file)

    total_time_my = my_data['total_time'].astype(int)
    total_time_gcc_o1 = gcc_o1_data['total_time'].astype(int)
    total_time_gcc_o2 = gcc_o2_data['total_time'].astype(int)

    # 性能得分计算
    score1 = total_time_gcc_o1 / total_time_my
    score2 = total_time_gcc_o2 / total_time_my

    num_80_100_score2 = score2[score2 >= 0.8].count()
    num_60_80_score2 = score2[(score2 >= 0.6) & (score2 < 0.8)].count()
    num_40_60_score2 = score2[(score2 >= 0.4) & (score2 < 0.6)].count()
    num_20_40_score2 = score2[(score2 >= 0.2) & (score2 < 0.4)].count()
    num_0_20_score2 = score2[score2 < 0.2].count()


    print('num_80_100_score2:', num_80_100_score2)
    print('num_60_80_score2:', num_60_80_score2)
    print('num_40_60_score2:', num_40_60_score2)
    print('num_20_40_score2:', num_20_40_score2)
    print('num_0_20_score2:', num_0_20_score2)

    # 绘制饼图
    nums = np.array([num_80_100_score2, num_60_80_score2, num_40_60_score2, num_20_40_score2, num_0_20_score2])
    
    # plt.pie(nums, labels=['80-100', '60-80', '40-60', '20-40', '0-20'], autopct='%1.1f%%')
    plt.pie(nums, labels=[f'80-100%:\n   {nums[0]}', f'60-80:\n   {nums[1]}', f'40-60:\n   {nums[2]}', f'20-40:\n   {nums[3]}', f'0-20:\n   {nums[4]}'], autopct='%1.1f%%')
    plt.title('Fraction percentage compared to GCC -O2')
    
    plt.savefig('/root/sysy-compiler/utils/evaluation/analysis/visualize/pie/pie_score2.png')

    plt.close()

    # 再针对score1进行绘制
    num_80_100_score1 = score1[score1 >= 0.8].count()
    num_60_80_score1 = score1[(score1 >= 0.6) & (score1 < 0.8)].count()
    num_40_60_score1 = score1[(score1 >= 0.4) & (score1 < 0.6)].count()
    num_20_40_score1 = score1[(score1 >= 0.2) & (score1 < 0.4)].count()
    num_0_20_score1 = score1[score1 < 0.2].count()

    print('num_80_100_score1:', num_80_100_score1)
    print('num_60_80_score1:', num_60_80_score1)
    print('num_40_60_score1:', num_40_60_score1)
    print('num_20_40_score1:', num_20_40_score1)
    print('num_0_20_score1:', num_0_20_score1)

    # 绘制饼图
    nums2 = np.array([num_80_100_score1, num_60_80_score1, num_40_60_score1, num_20_40_score1, num_0_20_score1])

    print(f'nums2: {nums2}')
    plt.pie(nums2, labels=[f'80-100%:\n   {nums2[0]}', f'60-80:\n   {nums2[1]}', f'40-60:\n   {nums2[2]}', f'20-40:\n   {nums2[3]}', f'0-20:\n   {nums2[4]}'], autopct='%1.1f%%')
    plt.title('Fraction percentage compared to GCC -O1')

    plt.savefig('/root/sysy-compiler/utils/evaluation/analysis/visualize/pie/pie_score1.png')

    plt.close()

if __name__ == "__main__":
    my_csv_file ='/root/sysy-compiler/utils/evaluation/analysis/result/my_p_result.csv'
    gcc_o1_csv_file = '/root/sysy-compiler/utils/evaluation/analysis/result/gcc_p_o1_result.csv'
    gcc_o2_csv_file = '/root/sysy-compiler/utils/evaluation/analysis/result/gcc_p_o2_result.csv'
    pie(my_csv_file, gcc_o1_csv_file, gcc_o2_csv_file)