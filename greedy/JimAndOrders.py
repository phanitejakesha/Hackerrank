#!/bin/python3

import sys

def jimOrders(orders):
    # Complete this function
    li=[]
    for i in range(0,len(orders)):
        li=li+[sum(orders[i])]
    lr=sorted(range(len(li)),key=lambda x:li[x])
    for i in range(0,len(lr)):
        lr[i]=lr[i]+1
    return lr
        

if __name__ == "__main__":
    n = int(input().strip())
    orders = []
    for orders_i in range(n):
       orders_t = [int(orders_temp) for orders_temp in input().strip().split(' ')]
       orders.append(orders_t)
    result = jimOrders(orders)
    print (" ".join(map(str, result)))




