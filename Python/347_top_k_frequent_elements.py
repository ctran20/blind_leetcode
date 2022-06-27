class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashmap = {}
        ret = []

        if k == len(nums):
            return nums

        # Create hashmap
        for i in nums:
            hashmap[i] = hashmap.get(i, 0) + 1

        # Create negative tuple list cause heapify is a min heap
        heap = [(-val, key) for key, val in hashmap.items()]
        heapq.heapify(heap)

        # Pop heap k times
        for i in range(k):
            ret.append(heapq.heappop(heap)[1])

        return ret