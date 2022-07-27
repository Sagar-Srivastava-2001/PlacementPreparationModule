class Solution {
public:
    
    int expandFromCentre(string s, int left, int right){
        while(left >= 0 and right < s.length() and s[left] == s[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
    
    string longestPalindrome(string s) {
        int start = 0;
        int end = 0;
        
        for(int i=0;i<s.length();i++){
            int even = expandFromCentre(s,i,i+1);
            int odd = expandFromCentre(s,i,i);
            int len = max(odd,even);
            
            if(len > end - start){
                start = i - (len-1)/2;
                end = i + len/2;
            }
        }
        
        return s.substr(start,end+1-start);     
        
        // In substring of java, the parameters represent (start, end)  locations.
        // In substr of C++, the parameters represent (start,len) where len is the length of the substring 
    }
};
