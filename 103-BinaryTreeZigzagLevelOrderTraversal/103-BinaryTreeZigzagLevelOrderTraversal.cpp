// Last updated: 5/24/2025, 1:50:45 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr)
        return {};
        vector<vector<int>> ans;
        int isLevelEvenOrOdd = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> V;
            int size = q.size();
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                if(isLevelEvenOrOdd % 2 == 0)
                    V.push_back(temp->val);
                else
                    V.insert(V.begin(),temp->val);

                 if(temp->left)
                    q.push(temp->left);
                 if(temp->right)
                    q.push(temp->right);   
            }
            isLevelEvenOrOdd++;
            ans.push_back(V);
        }
        return ans;
    }
};