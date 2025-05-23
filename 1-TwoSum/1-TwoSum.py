# Last updated: 5/24/2025, 1:51:16 AM
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_to_index = {}
        for i, num in enumerate(nums):
            diff = target - num
            if diff in num_to_index:
                return [num_to_index[diff],i]
            num_to_index[num] = i
        return[]    