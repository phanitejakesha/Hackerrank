#!/bin/python3

import sys
from collections import Counter

def lonelyinteger(a):
    # Complete this function
    x=Counter(a)
    y=list(x.values())
    m=list(x.keys())
    ans=y.index(1)
    return m[ans]

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
result = lonelyinteger(a)
print(result)


