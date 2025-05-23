# Last updated: 5/24/2025, 1:50:57 AM
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
       current_sum = max_sum = nums[0]
       for n in nums[1:]:
         current_sum = max(n,current_sum+n)
         max_sum = max(current_sum,max_sum)
       return max_sum 
