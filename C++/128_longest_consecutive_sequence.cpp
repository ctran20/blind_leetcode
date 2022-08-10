class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    std::unordered_set<int> setNums;
    int longest = 0;
    int current;
    
    // Convert nums to a hashtable to remove duplicate
    for (int n : nums) {
      setNums.insert(n);
    }
    
    for (int i : setNums) {
      current = 0;
        
      // If the current number is the smallest of the consecutive sequence
      // Start counting up
      if(setNums.find(i-1) == setNums.end()){
        current++; 
        
        while(setNums.find(i+current) != setNums.end()) current++; 
      }
      longest = max(current, longest);  
    }
    return longest;
  }
};