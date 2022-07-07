class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n-3;){
            for(int j=i+1;j<n-2;){
                int l = j + 1;
                int r = n-1;
                
                int newTarget = target - nums[i] - nums[j];
                
                while(l < r){
                    int sum = nums[l] + nums[r];
                    
                    if(sum == newTarget){
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        int temp1 = nums[l];
                        int temp2 = nums[r];
                        l++;
                        r--;
                        
                        // Removing Duplicates
                        while(l < r and nums[l] == temp1){
                            l++;
                        }
                        
                        while(r > l and nums[r] == temp2){
                            r--;
                        }
                    }
                    else if(sum > newTarget){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
                int temp3 = nums[j];
                j++;
                while(j < n and nums[j] == temp3){
                    j++;
                }
            }
            int temp4 = nums[i];
            i++;
            
            while(i < n and nums[i] == temp4){
                i++;
            }
        }
        return ans;
    }
};
