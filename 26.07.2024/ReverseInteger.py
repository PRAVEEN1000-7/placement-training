class Solution:
    def reverse(self, x: int) -> int:
        
        y=str(x)

        if x<0:            
            z=""
            for i in range(1,len(y)):
                z+=str(y[i])
            z="-"+z[::-1]
            z=int(z)
            
            if z < -2**31 :
                return 0
            else :
                return z

        elif int(y[::-1]) < -2**31 or int(y[::-1]) > 2**31-1 :
            return 0

        else :
            return int(y[::-1])
