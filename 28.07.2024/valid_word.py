class Solution:
    def isValid(self, word: str) -> bool:

        vowel='aeiouAEIOU'   
        d=0
        c=0
        v=0
        con=0
        sc=0
        if len(word) >=3:
            for i in word :
                if i.isalpha():
                    c+=1
                if i.isdigit():
                    d+=1
                if i in vowel :
                    v+=1
                if i.isalpha() and i not in vowel :
                    con+=1
                if i in '$@#':
                    sc+=1
            if c>=2 and v>0 and con>0 and sc==0:
                
                return True
            else :
                return False

        else :
            return False
        
