class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> x;
        sort(intervals.begin(),intervals.end());
        x.push_back(intervals[0][0]);
        
        int Max = intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] <= Max){
                Max = max(Max,intervals[i][1]);
            }
            else{
                x.push_back(Max);
                ans.push_back(x);
                x.clear();
                x.push_back(intervals[i][0]);
                Max = intervals[i][1];
            }
        }
        x.push_back(Max);
        ans.push_back(x);
        return ans;
    }
};
