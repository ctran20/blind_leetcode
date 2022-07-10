class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1
        
        # Two pointers moving inward to scan the string
        while left < right:
            if not s[left].isalnum():
                left += 1
                continue
                
            if not s[right].isalnum():
                right -= 1
                continue
        
            if s[left].lower() != s[right].lower():
                return False
            
            left += 1
            right -= 1
            
        return True