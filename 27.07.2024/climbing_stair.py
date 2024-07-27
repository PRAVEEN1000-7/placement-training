class Solution:
    def climbStairs(self, n: int) -> int:

        if n<=2:
            return n
        else:
            x,y,z=1,2,0
            for i in range(2,n):
                z=x+y
                x=y
                y=z
        return z
