import pandas as pd
import os

def timer2time(time_str):
    time_parts = time_str.split('-')
    hours = int(time_parts[0][:-1])
    minutes = int(time_parts[1][:-1])
    seconds = int(time_parts[2][:-1])
    microseconds = int(time_parts[3][:-2])
    total_microseconds = (
        hours * 3600000000 +
        minutes * 60000000 +
        seconds * 1000000 +
        microseconds
    )
    return total_microseconds

try:
    with open('/root/sysy-compiler/utils/evaluation/analysis/gcc_p_o2_log.txt', 'r', encoding='utf-8') as file:
        text = file.read()
        paragraphs = text.strip().split('\n\n')

        df = pd.DataFrame(columns=['file_name', 'compile_time', 'run_time', 'status', 'timer_line', 'total_time'])

        for i, paragraph in enumerate(paragraphs):
            # print(f'段落: {i}')
            # print(paragraph)
            # print()
            lines = paragraph.split('\n')
            file_name = os.path.basename(lines[1].replace('测试文件:', ''))
            compile_time = lines[9].replace('编译时间: ', '')
            run_time = lines[10].replace('运行时间: ', '')
            status = lines[11].replace('测试结果: ', '')
            timer_line = lines[6].replace('Timer@', '').split(':')[0]
            total_time_log = lines[7].replace('TOTAL: ', '')
            total_time = timer2time(total_time_log)
            
            df.loc[len(df)] = [file_name, compile_time, run_time, status, timer_line, total_time]

        df.to_csv(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'gcc_p_o2_result.csv'))

except FileNotFoundError:
    print("文件未找到，请检查文件路径是否正确。")
except Exception as e:
    print(f"发生其他错误：{e}")