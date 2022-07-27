vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> s;
    vector<int> ans;
    
    for(int i=0;i<A.size();i++){
        if(s.empty() == true){
            ans.push_back(-1);
            s.push(A[i]);
        }
        else{
            while(!s.empty() and s.top() >= A[i]){
                s.pop();
            }
            if(s.empty() == true){
                ans.push_back(-1);
                s.push(A[i]);
            }
            else{
                ans.push_back(s.top());
                s.push(A[i]);
            }
        }
    }
    return ans;
}
