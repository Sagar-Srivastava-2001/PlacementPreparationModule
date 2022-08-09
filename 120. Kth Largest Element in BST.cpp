class Solution
{
    public:
    
    int cnt;
    int ans;
    
    void solve(Node* root)
    {
        if(root == NULL)    return;
        
        solve(root->left);
        cnt--;
        if(cnt == 0){
            ans = root->data;
        }
        solve(root->right);
    }
    
    int count(Node* root){
        if(root == NULL){
            return 0;
        }
        
        return 1 + count(root->left) + count(root->right);
    }
    
    int kthLargest(Node *root, int K)
    {
        int total = count(root);
        K = total - K + 1;
        cnt = K;
        solve(root);
        return ans;
    }
};
