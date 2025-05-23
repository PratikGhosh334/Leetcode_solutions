// Last updated: 5/24/2025, 1:50:21 AM
class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        return nums[nums.length/2];
    }
}