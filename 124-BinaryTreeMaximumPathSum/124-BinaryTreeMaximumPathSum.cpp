// Last updated: 5/24/2025, 1:50:31 AM
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
    int maxSum = INT_MIN;

    int maxPathSum(TreeNode* root) {
    helper(root);
    return maxSum;
    }

private:
    int helper(TreeNode* node){
        if(!node)return 0;

        int leftPathSum = max(helper(node->left), 0);
        int rightPathSum= max(helper(node->right), 0);

        int MaxIfNode = node->val + leftPathSum + rightPathSum;
        maxSum = max(maxSum,MaxIfNode);

        return node->val+max(leftPathSum,rightPathSum);
    }    
};