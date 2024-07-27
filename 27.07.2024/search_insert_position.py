class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        n=nums 

        if target in nums :
            return nums.index(target)
        
        else :
            n.append(target)
            n.sort()
            return n.index(target)
