# 缓存素数
prime_list = []
# 缓存默尼森数
monisen_list = []

# 素数搜索范围
minNum = 2
maxNum = 1000 

# 匹配到第几个
j = 0
    
def prime(num): 
    # 判断是否是素数
    if num < 1:
        return False
    for i in range(2,num):
        if num % i == 0:
            return False
    return True

def poww(P):
    # 快速幂
    ans = 1
    base = 2
    while P != 0:
        if P&1 != 0:
            ans *= base
        base *= base
        P >>= 1
    return ans

def CachePrime():
    global minNum,maxNum
    # 寻找区间内的素数加入缓存列表
    for i in range(minNum,maxNum):
        if prime(i):
            prime_list.append(i) 

def monisen(no):
    global j,minNum,maxNum
    l = len(prime_list)
    CachePrime()
    # 遍历素数集合  
    for index,P in enumerate(prime_list[l:]):
        M = poww(P) - 1
        if prime(M):
            j += 1
        if j == no:
            return M
    else:
        minNum,maxNum = maxNum , maxNum *2
        return monisen(no)
    
print(monisen(int(input())))
