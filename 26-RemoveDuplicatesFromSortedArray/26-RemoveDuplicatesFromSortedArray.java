// Last updated: 5/24/2025, 1:51:03 AM
class Solution {
    public int removeDuplicates(int[] nums) {
      int i = 1;
      for(int j=1;j<nums.length;j++){
        if(nums[j]!=nums[i-1]){
            nums[i]=nums[j];
            i++;

        }
      }return i;
    }
}