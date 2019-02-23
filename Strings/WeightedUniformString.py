#!/bin/python3

import re
x=int(input())
h='ereiamstackerrank'
match=re.search(r'.*h.*a.*c.*k.*e.*r.*r.*a.*n.*k',h)
x1=type(match)

for i in range(0,x):
    s=input()
    h='hackerworld'
    match=re.search(r'.*h.*a.*c.*k.*e.*r.*r.*a.*n.*k',s)
    if type(match)==x1:
        print("NO")
    else:
        print("YES")
