# https://www.codewars.com/kata/51f2b4448cadf20ed0000386/train/python
def remove_url_anchor(url):
    ans = ""
    for i in url:
        if (i == '#'):
            break
        ans += i
    return ans
