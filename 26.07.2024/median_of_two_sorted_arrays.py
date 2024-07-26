class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        List = nums1 + nums2
        List = sorted(List)

        l=len(List)/2
        m=int(l)
        
        if l>int(l) :
            return List[m]
        else :
            return (List[m]+List[m-1])/2
    
