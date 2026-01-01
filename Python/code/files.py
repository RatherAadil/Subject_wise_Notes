with open('hello.txt','r') as f:
    # f.writelines(['\nhello\n','world\n','how\n'])
    #  f.seek(0)
    for line in f.readlines():
        print(line)
