class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int,Node*> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty())
        {
            Node* node = q.front().first;
            int line = q.front().second;
            q.pop();
            
            m[line] = node;
            
            if(node->left != NULL){
                q.push({node->left,line-1});
            }
            
            if(node->right != NULL){
                q.push({node->right,line+1});
            }
        }
        
        vector<int> ans;
        
        for(auto x:m){
            ans.push_back(x.second->data);
        }
        
        return ans;
    }
};
