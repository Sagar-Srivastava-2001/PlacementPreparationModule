/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL){
            return NULL;
        }
        
        map<Node*,Node*> m;
        Node* first = new Node(node->val,{});
        m[node] = first;
        
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            for(auto adj : temp->neighbors){
                if(m.find(adj) == m.end()){
                    m[adj] = new Node(adj->val, {});
                    q.push(adj);
                }
                
                m[temp]->neighbors.push_back(m[adj]);
            }
        }
        
        return m[node];
    }
};
