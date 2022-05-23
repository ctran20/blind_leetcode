class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        hmap = {}
        
        # Make hashmap to count t
        for i in t:
            hmap[i] = 1 + hmap.get(i, 0)
            
        # Iterate through s & subtract count from hashmap t
        for i in s:
            if hmap.get(i, 0) == 0:
                return False
            else:
                hmap[i] -= 1
                if hmap[i] < 0:
                    return False
            
        return True