# https://www.codewars.com/kata/58ca77b9c0d640ecd2000b1e/train/python
def procedure(i):
    total = 0
    for j in range(i,101,i):
        n = j
        while(n > 0):
            total += n%10
            n //= 10
    return total
