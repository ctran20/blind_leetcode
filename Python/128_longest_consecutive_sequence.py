class Solution:
  def longestConsecutive(self, nums: List[int]) -> int:
    # Convert nums to a hashtable to remove duplicate
    set_nums = set(nums)
    longest = 0
    
    for i in set_nums:
      current = 0
        
      # If the current number is the smallest of the consecutive sequence
      # Start counting up
      if i-1 not in set_nums:
          current += 1
            
          while i + current in set_nums:
            current += 1
                
      longest = max(longest, current)
        
    return longest