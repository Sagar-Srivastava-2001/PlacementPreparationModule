class Solution {
public:
    // Time Complexity : O(NK)
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k,l;
        
        for(k=n-2;k>=0;k--){
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        
        if(k < 0){
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(l = n-1; l>=0 ;l--){
                if(nums[l] > nums[k]){
                    swap(nums[l],nums[k]);
                    break;
                }
            }    
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
    
    string getPermutation(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        k = k-1;
        while(k--){
            nextPermutation(nums);   
        }
        string ans;
        for(auto x : nums)
            ans += to_string(x);
        
        return ans;
    }
};
