class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        
        n=list(set(nums))

        return len(n)!=len(nums)
