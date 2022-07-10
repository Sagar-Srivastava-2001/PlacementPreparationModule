class Solution {
public:
    
    void copyList(Node*head)
    {
        Node*temp = head;
        Node*forw = head->next;
        
        while(temp)
        {
            Node*copy = new Node(temp->val);
            temp->next = copy;
            copy->next = forw;
            temp = forw;
            if(forw != NULL)    forw = forw->next;
        }
    }
    
    void handleRandom(Node*head)
    {
        Node*temp = head;
        while(temp)
        {
            if(temp->random != NULL)
            temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
    }
    
    Node*detach(Node*head)
    {
        Node*dummy = new Node(-1);
        Node*itr = dummy;
        Node*temp = head;
        
        while(temp)
        {
            itr->next = temp->next;
            itr = itr->next;
            temp->next = itr->next;
            temp = temp->next;
        }
        
        return dummy->next;
    }
    
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return NULL;
        
        copyList(head);
        handleRandom(head);
        return detach(head);
    }
};
