class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        def decimal(x):
            y=0
            p=len(x)-1
            for i in x:
                y+=int(i)*(2**p)
                p-=1
            return y
    
        x=decimal(a)
        y=decimal(b)

        z=x+y

        def binary(x):
            y=""
            while x>0:
                y=str(x%2)+y
                x//=2
            return y if y else "0"

    
        return binary(z)
    
