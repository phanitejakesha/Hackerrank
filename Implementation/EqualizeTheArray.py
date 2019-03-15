:#!/bin/python3

import sys
from collections import Counter

def equalizeArray(arr):
    x=Counter(arr)
    y=list(x.values())
    return len(arr)-max(y)
    # Complete this function
    

if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().strip().split(' ')))
    result = equalizeArray(arr)
    print(result)


