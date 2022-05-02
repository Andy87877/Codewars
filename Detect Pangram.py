# https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/python
import string

def is_pangram(s):
    s = s.lower()
    l = []
    for i in s:
        if ((i <= 'z') and (i >= 'a')):
            if (l.count(i) == 0):
                l.append(i)
            
    if (len(l) == 26):
        return True
    print(l)
    return False
