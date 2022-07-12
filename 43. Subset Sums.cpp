class Solution
{
public:
    
    void solve(vector<int> arr, int i, int n, int sum, vector<int> &ans){
        if(i>=n){
            ans.push_back(sum);
            return;
        }
        
        solve(arr,i+1,n,sum+arr[i],ans);
        solve(arr,i+1,n,sum,ans);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        solve(arr,0,N,0,ans);
        return ans;
    }
};
