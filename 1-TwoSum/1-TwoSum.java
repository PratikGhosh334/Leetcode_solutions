// Last updated: 5/24/2025, 1:51:14 AM
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> numMap = new HashMap<>();
       int n = nums.length;
       for(int i = 0;i < n;i++){
        int complement = target - nums[i];
        if(numMap.containsKey(complement) ){
            return new int[]{i, numMap.get(complement)};
        }
        numMap.put(nums[i], i);
       }

       return new int[]{};
    }
}