class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hmap;
        
        for(int i = 0; i < nums.size();i++){
            if(hmap.find(nums[i]) == hmap.end()){
                hmap[nums[i]] = nums[i];
            }
            else{
                return true;
            }
        }
        
        return false;
    }
};