// Last updated: 5/24/2025, 1:50:52 AM
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
     int t1=m-1, t2=n-1, fi=m+n-1;
       while(t1>=0 && t2>=0){
        nums1[fi--]=(nums1[t1]>nums2[t2]? nums1[t1--] : nums2[t2--]);
       }
       while(t2>=0){
        nums1[fi--]=nums2[t2--];
       }
    }
}