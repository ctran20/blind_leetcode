class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret;
        int product = 1;
        int zero_flag;
        int len = nums.size();
        
        // Not postfix, prefix approach
        // Traverse the array to get the product of the array
        for(int i = 0; i < len; i++){
            if(nums[i] == 0){
                zero_flag++;
            }
            product *= nums[i] != 0 ? nums[i] : 1;
        }         
            
        // Divides the product by the current element to get "Product of Array Except Self" 
        // If there are more than 1 zero in the array, the entire array will only contains 0
        if(zero_flag > 1){
            for(int i = 0; i < len; i++){
                ret.push_back(0);
            }
            return ret;
        }
        // If there are only 1 zero, then the whole array is 0 execept for that element
        else if(zero_flag == 1){
            for(int i = 0; i < len; i++){
                ret.push_back(nums[i] != 0 ? 0 : product);
            }
        }
        else{
            for(int i = 0; i < len; i++){
                ret.push_back(product/nums[i]);
            }
        }

        return ret;
    }
};