import os 

def expande(folder_path):
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            if file.endswith('.c'):
                """
                在file最开始加两行
                #define starttime _sysy_starttime
                #define stoptime _sysy_stoptime
                """
                file_path = os.path.join(root, file)

                with open(file_path, 'r+') as f:
                    content = f.read()
                    f.seek(0, 0)
                    f.write("#define starttime _sysy_starttime\n#define stoptime _sysy_stoptime\n" + content)

folder_path = '/root/sysy-compiler/test_cases/functional_c'
expande(folder_path)

# r"const ([A-Za-z_]+) ([A-Za-z_][0-9A-Za-z_]*) = (.*);"

# "#define " + match[1] + " " + match[2]