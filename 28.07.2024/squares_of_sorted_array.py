class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        
        n= [ i**2 for i in nums]
        n.sort()
        return n
