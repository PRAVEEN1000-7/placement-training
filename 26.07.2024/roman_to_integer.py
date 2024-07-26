class Solution:
    def romanToInt(self, s: str) -> int:
        
        data= {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
        }

        l=len(s)
        i = l-1
        val = 0
        while i>=0:
            
            if i < l-1 and data[s[i]] < data[s[i+1]]:
                val-=data[s[i]]
            else :
                val+=data[s[i]]
            i-=1

        return val
            
