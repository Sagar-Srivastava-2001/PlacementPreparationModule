class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i = s.length()-1;
        
        while(i >= 0){
            while(i >= 0 and s[i] == ' '){
                i--;
            }
            
            if(i < 0)
                break;
            
            int j = i-1;
            
            while(j >= 0 and s[j] != ' '){
                j--;
            }
            
            string temp = s.substr(j+1,i-j);
            
            if(ans.length()==0){
                ans = temp;
            }
            else{
                ans = ans + ' ' + temp;
            }
            
            i = j-1;
        }
        
        return ans;
    }
};
