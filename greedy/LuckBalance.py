#!/bin/python3

import sys

def luckBalance(n, k, contests):
    # Complete this function

    li=[]
    lr=[]
    for i in range(0,len(contests)):
        if contests[i][1]==1:
            li=li+[contests[i][0]]
        else:
            lr=lr+[contests[i][0]]
    li.sort()  
    x=sum(lr)
    y=sum(li)
    x=x+y
    m=len(li)-k
    su=0
    for i in range(0,m):
        su=su+li[i]
    return x-2*su
      

if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    contests = []
    for contests_i in range(n):
       contests_t = [int(contests_temp) for contests_temp in input().strip().split(' ')]
       contests.append(contests_t)
    result = luckBalance(n, k, contests)
    print(result)


