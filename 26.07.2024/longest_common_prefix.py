class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        prf=""

        for i in range(0,len(strs[0])) :
            for j in strs :
                if i==len(j) or j[i] != strs[0][i] :
                    return prf
            prf+=strs[0][i]
            
        return prf
