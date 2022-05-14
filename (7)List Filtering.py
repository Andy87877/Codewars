# https://www.codewars.com/kata/53dbd5315a3c69eed20002dd/train/python
def filter_list(l):
    ans = []
    for i in l:
        print(type(i))
        if (type(i) == type(1)):
            ans.append(i)
    return ans
