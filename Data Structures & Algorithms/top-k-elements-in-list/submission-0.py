class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for i in nums:
            mp[i] = mp.get(i, 0) + 1

        bucket = [[] for i in range(len(nums) + 1)]
        for key, v in mp.items():
            bucket[v].append(key)
        res = []
        for i in range(len(bucket) - 1 , 0, -1):
            for j in bucket[i]:
                res.append(j)
                if len(res) == k:
                    return res
