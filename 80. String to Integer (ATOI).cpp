class Solution {
public:
    
    bool isDigit(char ch)
    {
        if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9'){
            return true;
        }
        return false;
    }
    
    int myAtoi(string s) {
        long long int ans = 0;
        bool pos = true;
        long long int mul = 1;
        
        if((s[0] >= '0' and s[0] <= '9') || (s[0] == '+' || s[0] == '-' || s[0] == ' ')){
            reverse(s.begin(),s.end());
                
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                continue;
            }
            else
            {
                if(s[i] >= '0' and s[i] <= '9'){
                    ans += (s[i]-'0')*mul;
                    mul *= 10;
                }   
                else
                {
                    if(s[i] == '-'){
                        pos = false;
                    }    
                    else if(s[i] == '+'){
                        pos = true;
                    }
                    else{
                    }
                }
            }
        }
            
        if(pos == false){
            ans = ans * -1;
        }
            
        if(ans < INT_MIN){
            return INT_MIN;
        }
        else if(ans > INT_MAX){
            return INT_MAX;
        }
        
        return ans;   
        }
        return 0;
    }
};
