class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        int len = nums.size();
        int complement;
        
        for(int i = 0; i < len; i++){
            complement = target - nums[i];
            
            if(hmap.find(complement) != hmap.end()){
                return {hmap[target - nums[i]] ,i};
            }
            
            hmap[nums[i]] = i;
        }
        
        // Error
        return {-1,-1};
    }
};