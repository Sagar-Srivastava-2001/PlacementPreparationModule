// Stack class.
class Stack {
    
public:
    vector<int> v;
    int maxSize;
    Stack(int capacity) {
        // Write your code here.
        maxSize = capacity;
    }

    void push(int num) {
        // Write your code here.
        v.push_back(num);
    }

    int pop() {
        // Write your code here.
        if(v.size()==0){
            return -1;
        }
        int top = v[v.size()-1];
        v.pop_back();
        return top;
    }
    
    int top() {
        // Write your code here.
        if(v.size()==0){
            return -1;
        }
        int top = v[v.size()-1];
        return top;
    }
    
    int isEmpty() {
        return v.size() == 0;
    }
    
    int isFull() {
        // Write your code here.
        return v.size() == maxSize;
    }
    
};
