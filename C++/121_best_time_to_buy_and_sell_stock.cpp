class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int minPrice = prices[0];
            
        // Find highest peek for every lowest point
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > max){
                max = prices[i] - minPrice;
            }
        }
        
        return max;
    }
};