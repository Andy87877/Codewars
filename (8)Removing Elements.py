# https://www.codewars.com/kata/5769b3802ae6f8e4890009d2/train/python
def remove_every_other(my_list): 
    ans = []
    for i in range(len(my_list)):
        if (i%2 == 0):
            ans.append(my_list[i])
    return ans
