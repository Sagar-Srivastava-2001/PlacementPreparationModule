Node* mergeTwoLists(Node* a, Node* b){
    Node* dummy = new Node(-1);
    Node* itr = dummy;
    
    while(a and b){
        if(a->data < b->data){
            itr->bottom = a;
            itr = itr->bottom;
            a = a->bottom;
        }
        else{
            itr->bottom = b;
            itr = itr->bottom;
            b = b->bottom;
        }
    }
    
    if(a != NULL){
        itr->bottom = a;
    }
    
    if(b != NULL){
        itr->bottom = b;
    }
    
    return dummy->bottom;
}

Node *flatten(Node *root)
{
    if(root == NULL || root->next == NULL){
        return root;
    }
    
    root->next = flatten(root->next);
    
    root = mergeTwoLists(root, root->next);
    return root;
}
