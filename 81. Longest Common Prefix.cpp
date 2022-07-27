class Solution {
public:
    
    // bool isValid(char ch)
    // {
    //     if((ch >= 'a' and ch <='z') and (ch >= 'A' and ch <= 'Z')){
    //         return true;
    //     }
    //     return false;
    // }
    
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b = strs[strs.size()-1];
        
        string ans;
        
        for(int i=0;i<a.size();i++){
            if(a[i] == b[i]){
                ans.push_back(a[i]);
            }
            else{
                break;
            }
        }
        return ans;
    }
};
