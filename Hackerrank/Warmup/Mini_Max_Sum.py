#!/bin/python3

import sys

def miniMaxSum(arr):
    # Complete this function
    sum = 0;
    for x in arr:
        sum = sum + x
    min = sum - arr[0]
    max = min
    for i in range(1,5):
        sum1 = sum - arr[i]
        if sum1 < min:
            min = sum1
        if sum1 > max:
            max = sum1
    print(min,max)

if __name__ == "__main__":
    arr = list(map(int, input().strip().split(' ')))
    miniMaxSum(arr)
