class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0){
            return 0;
        }
        int ans = 0;
        int i = 0;
        int j = 0;
        
        vector<int> v(256,0);
        v[s[0]]++;
        
        while(j != s.length()-1){
            if(v[s[j+1]] == 0){
                j++;
                v[s[j]] = 1;
                ans = max(ans,j-i+1);
            }
            else{
                v[s[i]]--;
                i++;
            }
        }
        return max(ans,1);
    }
};
