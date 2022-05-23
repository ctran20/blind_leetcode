class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hmap = {}
        for i in nums:
            if i not in hmap:
                hmap[i] = i
            else:
                return True
            
        return False