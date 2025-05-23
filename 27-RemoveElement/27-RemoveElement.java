// Last updated: 5/24/2025, 1:51:02 AM
class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0;
        for(int num : nums){
            if(num!=val){
                nums[i++]=num;
            }
        
        }
        return i;
    }
}