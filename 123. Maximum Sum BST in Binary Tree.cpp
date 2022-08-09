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

class Pair
{
    public:
    
    int sum;
    int Max;
    int Min;
    bool isBST;
};

class Solution {
public:
    
    Pair solve(TreeNode* root, int &ans){
        if(root == NULL){
            Pair base;
            base.sum = 0;
            base.Max = INT_MIN;
            base.Min = INT_MAX;
            base.isBST = true;
            return base;
        }
        
        Pair lp = solve(root->left, ans);
        Pair rp = solve(root->right, ans);
        Pair res;
        
        res.Min = min({root->val, lp.Min, rp.Min});
        res.Max = max({root->val, lp.Max, rp.Max});
        bool flag = false;
        
        if(lp.isBST and rp.isBST and root->val > lp.Max and root->val < rp.Min)
            flag = true;
        
        res.isBST = flag;
        
        if(flag == false){
            res.sum = -1e9;
        }
        else{
            res.sum = lp.sum + rp.sum + root->val;
            ans = max(ans, res.sum);
        }
        return res;
    }
    
    int maxSumBST(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};
