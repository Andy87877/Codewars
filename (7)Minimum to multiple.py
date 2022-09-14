# https://www.codewars.com/kata/5e030f77cec18900322c535d/train/python
def minimum(a, x):
    ans = 0
    print(a,x)
    if (a%x > x-(a%x)):
        return x-(a%x)
    return a%x
