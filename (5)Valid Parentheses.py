# https://www.codewars.com/kata/52774a314c2333f0a7000688/train/python
def valid_parentheses(string):
    only = []
    for i in string:
        if ((i == ')') or (i == '(')):
            only.append(i)
    print(only)
    for i in range(len(only)):
        if (only[i] == '('):
            for j in range(i+1,len(only)):
                if (only[j] == ')'):
                    only[i] = '.'
                    only[j] = '.'
                    break
        if (only[i] == ')'):
            return False
        
    for i in range(len(only)-1,-1,-1):
        if (only[i] == ')'):
            for j in range(len(only)-1,i,-1):
                if (only[j] == '('):
                    only[i] = '.'
                    only[j] = '.'
                    break
        if (only[i] == '('):
            return False
        
    return True
