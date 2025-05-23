// Last updated: 5/24/2025, 1:49:57 AM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        vector<int> ans;
        for(int i=0;i<n.size();i++){
            int x = abs(n[i]);
            if(n[x-1]<0){
                ans.push_back(x);
            }
            n[x-1]*=-1;

        }
        return ans;
    }
};