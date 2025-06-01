// Last updated: 6/1/2025, 12:30:15 PM
class Solution {
public:
    vector<vector<int>> result;

    void permutation(vector<int> &nums,int i,int n){
    if(i==n){
        result.push_back(nums);
        return;
    }

    for(int j=i;j<=n;j++){
        swap(nums[i],nums[j]);
        permutation(nums,i+1,n);
        swap(nums[j],nums[i]);
    }
}

    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0,nums.size()-1);       
        return result;
    }
};