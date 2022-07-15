class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x : s){
            if(x == '(' or x == '[' or x == '{')
                st.push(x);
            
            else{
                if(x == ')'){
                    if(st.size() > 0 and st.top() == '(')
                        st.pop();
                    else{
                        return false;
                    }
                }
                else if(x == ']'){
                    if(st.size() > 0 and st.top() == '[')
                        st.pop();
                    else{
                        return false;
                    }
                }
                else if(x == '}'){
                    if(st.size() > 0 and st.top() == '{')
                        st.pop();
                    else{
                        return false;
                    }
                }
            }
        }
        
        return st.size() == 0;
    }
};
