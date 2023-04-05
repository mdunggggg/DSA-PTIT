from math import *
t = int(input())
while t > 0:
    t -= 1
    n , k = map(int , input().split())
    res = 0
    if(k <= n): 
        res = perm(n , k)
    print(res % 1000000007)