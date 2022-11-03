# https://www.codewars.com/kata/5547929140907378f9000039/train/python
def shortcut(s):
    ans = ""
    for i in s:
        if ((i != 'a') and (i != 'e') and (i != 'i') and (i != 'o') and (i != 'u')):
            ans += i
    return ans
