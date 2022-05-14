# https://www.codewars.com/kata/578553c3a1b8d5c40300037c/train/python/627001a767dbc295a02ce330
import math
def binary_array_to_number(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]*pow(2,len(arr)-i-1)
    return total;
    
# return arr[0]*8 + arr[1]*4 + arr[2]*2 +arr[3]
