class Solution:
    def isPalindrome(self, x: int) -> bool:
        y=str(x)
        return True if y[::-1]==str(x) else False
