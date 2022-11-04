# https://www.codewars.com/kata/5a3dd29055519e23ec000074/train/python
def check_exam(arr1,arr2):
    ans = 0;
    for i in range(len(arr1)):
        if (arr1[i] == arr2[i]):
            ans += 4;
        elif (arr2[i] != ""):
            ans -= 1;
    if (ans < 0):
        ans = 0;
    return ans;
