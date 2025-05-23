# Last updated: 5/24/2025, 1:50:16 AM
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for num in nums:
            if num in seen:
             return True
            seen.add(num)
        return False