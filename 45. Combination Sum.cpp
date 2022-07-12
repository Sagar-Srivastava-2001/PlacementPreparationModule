class Solution {
public:
    
    void findCombination(int idx,int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp)
    {
        if(idx == arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        
        if(arr[idx] <= target){
            temp.push_back(arr[idx]);
            findCombination(idx,target-arr[idx],arr,ans,temp);
            temp.pop_back();
        }
        findCombination(idx+1,target,arr,ans,temp);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        findCombination(0,target,candidates,ans,temp);
        return ans;
    }
};
