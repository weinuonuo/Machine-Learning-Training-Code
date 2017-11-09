# 寻找第n个默尼森数

题目内容
> 经典程序设计问题：找第n个默尼森数。P是素数且M也是素数，并且满足等式M=2**P-1，则称M为默尼森数。例如，P=5，M=2**P-1=31，5和31都是素数，因此31是默尼森数。

程序参考框架
```
def prime(num):
    ...
def monsien(no):
    ...
    return xxx

print(monsien(int(input())))
```



> 输入格式:按提示用input()函数输入

> 输出格式：int类型

> 输入样例：4

> 输出样例：127

[题目地址](http://www.icourse163.org/learn/NJU-1001571005?tid=1002322007#/learn/ojhw?id=1002889327)


# 统计字符串中的字符个数

题目内容：
> 定义函数countchar()按字母表顺序统计字符串中所有出现的字母的个数（允许输入大写字符，并且计数时不区分大小写）

程序参考框架
```
def countchar(str):
    ... ...
    return a list

if __name__ == "__main__":
    str = input()
    ... ...
    print(countchar(str))

```

> 输入格式:
字符串

> 输出格式：
列表

> 输入样例：
Hello, World!

> 输出样例：
[0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 3, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0]

> 时间限制：500ms内存限制：32000kb

[题目地址](http://www.icourse163.org/learn/NJU-1001571005#/learn/ojhw?id=1002889329)


# 统计中文句子中的词频次数

题目内容：
> 对于一个已分词的中文句子（可方便地扩展到统计文件中的词频）请编写用字典解决本问题的程序，为便于OJ系统自动判断，程序最后输出字符串中包含的不同词的个数。
```
我/是/一个/测试/句子/，/大家/赶快/来/统计/我/吧/，/大家/赶快/来/统计/我/吧/，/大家/赶快/来/统计/我/吧/，/重要/事情/说/三遍/！
```

程序参考框架
```
def countfeq(s):
    ... ...
    return a ldict

if __name__ == "__main__":
    s = input()
    ... ...
    s_dict = countfeq(s)
    print(len(s_dict.keys()))

```

>输入格式:
字符串

>输出格式：
整数

>输入样例：
我/是/一个/测试/句子/，/大家/赶快/来/统计/我/吧/，/大家/赶快/来/统计/我/吧/，/大家/赶快/来/统计/我/吧/，/重要/事情/说/三遍/！/

>输出样例：
14

>时间限制：500ms内存限制：32000kb

[题目地址](http://www.icourse163.org/learn/NJU-1001571005#/learn/ojhw?id=1002889332)

# 找人程序

题目内容
> 有5名某界大佬xiaoyun、xiaohong、xiaoteng、xiaoyi和xiaoyang，其QQ号分别是88888、5555555、11111、12341234和1212121，用字典将这些数据组织起来。编程实现以下功能：用户输入某一个大佬的姓名后输出其QQ号，如果输入的姓名不在字典中则输出字符串“Not Found”。

程序框架：
```
def find_person(dict_users, strU):
     if user is in the dict:
          return user's QQ
     else:
          return 'Not Found'
if __name__ == "__main__":
     create a dict named dict_users
     strU =  input()
     print(find_person(dict_users, strU))
```

> 输入格式:
     字符串

> 输出格式：
     字符串

> 输入样例：
     xiaoyun

> 输出样例：
     88888

> 时间限制：500ms内存限制：32000kb

[题目地址](http://www.icourse163.org/learn/NJU-1001571005#/learn/ojhw?id=1002889332)
