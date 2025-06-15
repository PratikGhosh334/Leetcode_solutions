// Last updated: 6/15/2025, 12:24:32 PM
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        results.push_back({});
        int boundary = 0;
        for(int i = 0; i<nums.size();i++){
            int startSubsetFrom;
            if(i >0 && nums[i]==nums[i-1]){
                startSubsetFrom = boundary;
            }else{
                startSubsetFrom = 0;
            }
        int n = results.size();
        for(int j = startSubsetFrom; j < n; j++){
            vector<int> temp = results[j];
            temp.push_back(nums[i]);
            results.push_back(temp);

        }    
        boundary = n;

        }

        return results;
    }
};