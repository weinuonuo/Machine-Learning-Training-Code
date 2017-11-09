def countchar(str):
    charlist = [0 for i in range(24)]
    for char in str:
        if ord(char) >= 97 and ord(char) <= 122 :
            charlist[ord(char)-97] += 1
    return charlist

if __name__ == '__main__':
    str = input().lower()
    print(countchar(str))
    