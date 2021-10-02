#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

def staircase(n):
    for i in range(n):
        stair = ""
        for j in range(n-i-1):
            stair = stair + " "
        for j in range(i+1):
            stair = stair + "#"
        print(stair)

if __name__ == '__main__':
    n = int(input().strip())

    staircase(n)
