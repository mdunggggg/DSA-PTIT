from math import *
t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    res = 0
    print(comb(n * 2 , n)// (n + 1))