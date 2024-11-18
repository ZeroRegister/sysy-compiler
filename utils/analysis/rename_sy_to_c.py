import os

# 将所有的.sy文件更名为.c文件

def rename_sy_to_c(folder_path):
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            if file.endswith('.sy'):
                old_file_path = os.path.join(root, file)
                new_file_name = file[:-3] + '.c'
                new_file_path = os.path.join(root, new_file_name)
                os.rename(old_file_path, new_file_path)
                print(f'已将 {old_file_path} 更名为 {new_file_path}')
                

folder_path = '/root/sysy-compiler/test_cases/performance_c'
rename_sy_to_c(folder_path)