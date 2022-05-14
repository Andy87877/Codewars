# https://www.codewars.com/kata/544aed4c4a30184e960010f4/train/python
def divisors(integer):
    ans = []
    for i in range(2,integer):
        if (integer % i == 0):
            ans.append(i)
    if (len(ans) == 0):
        return (str(integer) + " is prime")
    else:
        return ans
    
