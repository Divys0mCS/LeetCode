class Solution:
    def isPalindrome(self, x: int) -> bool:
        copy = x
        p = 0
        if x < 0:
            return False
        while(x != 0):
            p = p * 10 + (x % 10)
            x //= 10
        if p == copy:
            return True
        else:
            return False