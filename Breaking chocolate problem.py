# https://www.codewars.com/kata/534ea96ebb17181947000ada/train/python
def break_chocolate(n, m):
    ans = n*m-1
    if (ans < 0):
        return 0
    return ans
