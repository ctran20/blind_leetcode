from collections import deque

class Solution
    def lengthOfLongestSubstring(self, s str) - int
      queue = deque([])
      longest = 0
      curr_length = 0
      
      # Iterate through the string counting the char until hitting a repeating char
      for i in s
        
        # Keep popping until the repeating char is removed
        while i in queue
            queue.popleft()
            curr_length -= 1
        queue.append(i)
        curr_length += 1
        longest = max(longest, curr_length)
            
      return longest