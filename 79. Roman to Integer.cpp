class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        int ans = m[s[s.length()-1]];
        
        for(int i=s.length()-1;i-1 >= 0; i--)
        {
            if(m[s[i-1]] < m[s[i]]){
                ans -= m[s[i-1]];
            }
            else{
                ans += m[s[i-1]];
            }
        }
        return ans;
    }
};
