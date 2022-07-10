class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            int l = i+1;
            int r = nums.size()-1;
            
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);
                    
                    while(l<r and nums[l] == v[1]){
                        l++;
                    }
                    
                    while(l<r and nums[r] == v[2]){
                        r--;
                    }
                }
                else if(nums[i] + nums[l] + nums[r] > 0){
                    r--;
                }
                else{
                    l++;
                }
            }
            
            while(i+1 < nums.size() and nums[i+1]==nums[i]){
                i++;
            }
        }
        return ans;
    }
};
