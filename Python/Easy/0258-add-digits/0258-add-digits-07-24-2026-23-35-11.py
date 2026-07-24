class Solution(object):
    def sum(self, num):
        s = 0
        while num != 0:
            s += num % 10
            num //= 10
        return s

    def addDigits(self, num):
        while num > 9:
            num = self.sum(num)
        return num