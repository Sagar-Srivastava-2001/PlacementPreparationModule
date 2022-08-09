Node* inorderSuccessor(Node* root, int key)
{
    Node* suc = NULL;
    
    while(root != NULL){
        if(key >= root->key){
            root = root->right;
        }
        else{
            suc = root;
            root = root->left;
        }
    }
    return suc;
}

Node* inorderPredecessor(Node* root, int key)
{
    Node* pre = NULL;
    
    while(root != NULL){
        if(key <= root->key){
            root = root->left;
        }
        else{
            pre = root;
            root = root->right;
        }
    }
    return pre;
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root == NULL){
        return;
    }
    
    suc = inorderSuccessor(root,key);
    pre = inorderPredecessor(root,key);
}
