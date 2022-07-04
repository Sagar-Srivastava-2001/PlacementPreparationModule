class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        if(numRows == 1){
            return {{1}};
        }
        
        if(numRows == 2){
            return {{1},{1,1}};
        }
        
        int i=2;
        vector<int> prev = {1,1};
        ans.push_back({1});
        ans.push_back({1,1});
            
        while(i < numRows){
            vector<int> curr;
            curr.push_back(1);
            
            for(int i=1;i<prev.size();i++){
                curr.push_back(prev[i]+prev[i-1]);
            }
            curr.push_back(1);
            
            ans.push_back(curr);
            prev = curr;
            curr = ans[ans.size()-1];
            i++;
        }
        return ans;
    }
};
