#!/bin/python3

import sys

def solve(a):
    # Complete this function
    if len(a)<=1:
        return"YES"
    s = sum(a[2:])
    x = a[0]
    if s==a[0]:
        return "YES"
    for i in range(2,len(a)):
        s = s - a[i]
        x = x + a[i-1]
        if s==x:
            return "YES"
    return "NO"
    
T = int(input().strip())
for a0 in range(T):
    n = int(input().strip())
    a = list(map(int, input().strip().split(' ')))
    result = solve(a)
    print(result)


