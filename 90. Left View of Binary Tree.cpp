vector<int> leftView(Node *root)
{
    vector<int> leftview;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        int i = 0;
        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            
            if(i == 0){
                leftview.push_back(temp->data);
            }
            
            if(temp->left)
                q.push(temp->left);
                
            if(temp->right)
                q.push(temp->right);
            
            i++;
        }
    }
    return leftview;
}
