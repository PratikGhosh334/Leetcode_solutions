// Last updated: 6/15/2025, 12:24:48 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> hash;
        for(int i=0; i < nums.size();++i){
       int complement = target - nums[i];
            if(hash.find(complement)!= hash.end()){
                return {hash[complement],i};
            }
            hash[nums[i]] = i;            
        }
        return{};
    }
};