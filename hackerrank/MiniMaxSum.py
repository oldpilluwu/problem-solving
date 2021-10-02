#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    total_sum = 0
    max = -1
    min = 10**9

    for num in arr:
        total_sum = total_sum + num
        if num < min:
            min = num
        if num > max:
            max = num
    
    print(f"{total_sum-max} {total_sum-min}")

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
