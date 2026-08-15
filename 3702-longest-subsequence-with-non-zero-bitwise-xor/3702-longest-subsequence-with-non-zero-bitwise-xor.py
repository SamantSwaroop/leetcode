class Solution:
    def longestSubsequence(self, nums):
        total_xor = 0
        for x in nums:
            total_xor ^= x

        if all(x == 0 for x in nums):
            return 0

        if total_xor != 0:
            return len(nums)

        return len(nums) - 1