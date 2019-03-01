#!/bin/python3

import sys

def fibonacciModified(t1, t2, n):
    # Complete this function
    li=[]
    for i in range(0,n):
        t3=t1+t2**2
        li=li+[t3]
        t1=t2
        t2=t3
    return li[n-3]
        

if __name__ == "__main__":
    t1, t2, n = input().strip().split(' ')
    t1, t2, n = [int(t1), int(t2), int(n)]
    result = fibonacciModified(t1, t2, n)
    print(result)


