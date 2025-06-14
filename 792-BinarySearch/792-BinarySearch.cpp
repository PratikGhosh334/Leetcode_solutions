// Last updated: 6/15/2025, 12:23:57 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid]<target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return -1;
    }
};