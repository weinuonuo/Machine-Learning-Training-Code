def  countfeq(s):
    s_dict = {}
    for i in s:
        if i not in '，。！；？“”':
            if i not in s_dict.keys():
                s_dict[i] = 1
            else:
                s_dict[i] += 1
    return s_dict

if __name__ == '__main__':
    s = input().split('/')
    s_dict = countfeq(s)
    print(len(s_dict.keys()))