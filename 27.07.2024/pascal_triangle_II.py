class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        
        n=34
        l=[]
        for i in range(1,n+1):
        
            x=1
            ll=[]
            for j in range(1,i+1):
                ll.append(x)
                x=x*(i-j)//j
            l.append(ll)
    
        return l[rowIndex]
