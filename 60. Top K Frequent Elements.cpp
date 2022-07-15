class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        vector<vector<int>> buckets(nums.size()+1);
        
        for(auto [a,b] : m){
            buckets[b].push_back(a);
        }
        
        vector<int> ans;
        
        for(int i=nums.size(); k!=0 ; i--){
            for(auto a:buckets[i]){
                ans.push_back(a);
                k--;
            }
        }
        return ans;
    }
};
