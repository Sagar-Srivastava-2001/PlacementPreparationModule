class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }
        
        map<int,int> m;
        
        for(auto x:s){
            m[x]++;
        }
        
        for(auto x:t){
            if(m.find(x) == m.end()){
                return false;
            }
            else{
                m[x]--;
                if(m[x] == 0){
                    m.erase(x);
                }
            }
        }
        
        if(m.size() == 0)
        return true;
        
        return false;
    }
};
