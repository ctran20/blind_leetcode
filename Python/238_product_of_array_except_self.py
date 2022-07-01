class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        ret = []
        zero_flag = 0
        
        # Not postfix, prefix approach
        # Traverse the array to get the product of the array
        for i in nums:
            if i == 0:
                zero_flag += 1
            product *= i if i != 0 else 1            
            
        # Divides the product by the current element to get "Product of Array Except Self" 
        # If there are more than 1 zero in the array, the entire array will only contains 0
        if zero_flag > 1:
            ret = [0]*len(nums)
            return ret
        # If there are only 1 zero, then the whole array is 0 execept for that element
        elif zero_flag == 1:
            for i in nums:
                ret.append(0 if i != 0 else product)
        else:
            for i in nums:
                ret.append(int(product/i))
            
        return ret