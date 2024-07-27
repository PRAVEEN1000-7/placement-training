class Solution:
    def isValid(self, s: str) -> bool:
        
        par=[]

        par.append(s[0])

        for i in s[1:] :

            if par and ((par[-1]=='(' and i == ')') or (par[-1]=='[' and i==']') or (par[-1]=='{' and i=='}') ):
                par.pop()
            else :
                par.append(i)
        
        if par==[]:
            return True
        else :
            return False
                 



        
        
