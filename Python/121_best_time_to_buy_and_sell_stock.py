class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max = 0
        minPrice = prices[0]

        # Find highest peek for every lowest point
        for i in prices:
            if i < minPrice:
                minPrice = i
            elif i - minPrice > max:
                max = i - minPrice

        return max