vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int Xor = 0;
    for(auto x : A){
        Xor = Xor ^ x;
    }
    
    for(int i=1;i<=A.size();i++){
        Xor = Xor ^ i;
    }
    
    int rsb = Xor & (-Xor);
    int x = 0;
    int y = 0;
    
    for(auto val : A){
        if((val & rsb) == 0){
            x = x ^ val;
        }
        else{
            y = y ^ val;
        }
    }
    
    for(int i=1;i<=A.size();i++){
        if((i & rsb) == 0){
            x = x ^ i;
        }
        else{
            y = y ^ i;
        }
    }
    
    vector<int> ans(2);
    
    for(int i=0;i<A.size();i++){
        if(x == A[i]){
            ans[0] = x;
            ans[1] = y;
            break;
        }
        
        if(y == A[i]){
            ans[0] = y;
            ans[1] = x;
            break;
        }
    }
    
    return ans;
}
