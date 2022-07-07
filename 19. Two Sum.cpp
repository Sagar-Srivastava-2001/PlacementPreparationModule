class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[nums[i]] = i;
        }
        
        for(int i=0;i<n;i++){
            if(m.find(target - nums[i]) != m.end() and m[target - nums[i]] != i){
                ans.push_back(i);
                ans.push_back(m[target - nums[i]]);
                break;
            }
        }
        return ans;
    }
};
