class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
        
        int p1 = n-1;
        int p2 = m-1;
        
        int idx = m+n-1;
        
        while(p2 >= 0){
            if(p1 >= 0 and a[p1] > b[p2]){
                a[idx] = a[p1];
                p1--;
                idx--;
            }
            else{
                a[idx] = b[p2];
                idx--;
                p2--;
            }
        }
    }
};  
