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
    
    int maxPathSum_util(TreeNode* root,int &result)
    {
        if(root == NULL)    return 0;
        
        int left = maxPathSum_util(root->left, result);
        int right = maxPathSum_util(root->right,result);
        
        int max_straight = max(max(left,right)+root->val,root->val);    // Case - 1
        int max_caseVal = max(max_straight, left + right + root->val);  // Case - 2 & 1 compared
        result = max(max_caseVal,result);
        
        return max_straight;
    }
    
    int maxPathSum(TreeNode* root) {
        int result = INT_MIN;
        maxPathSum_util(root,result);
        return result;
    }
};
