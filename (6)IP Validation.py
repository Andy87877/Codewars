# https://www.codewars.com/kata/515decfd9dcfc23bb6000006/train/python
def is_valid_IP(strng):
    l = strng.split('.')
    print(l)
    if (len(l) != 4):
        return False
    else:
        for i in l:
            if (i == ''):
                return False
            for j in range(len(i)):
                if ((ord(i[j]) < ord('0')) or (ord(i[j]) > ord('9'))):
                    return False
            if ((i[0] == '0') and (len(i) >= 2)):
                return False
            if (int(i) > 255):
                return False
    return True
    
   
