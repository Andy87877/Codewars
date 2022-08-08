# https://www.codewars.com/kata/55a5bfaa756cfede78000026/train/python
def problem(a):
    if (type(a) == type("123")):
        return "Error"
    return a*50+6
