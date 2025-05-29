// Last updated: 5/29/2025, 1:55:57 PM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> results;
        results.push_back({});

        for(int num : nums){
            int n = results.size();
            for(int i = 0; i < n;i++){
                vector<int> temp = results[i];
                temp.push_back(num);
                results.push_back(temp);
            }
        }

        return results;
    }
};