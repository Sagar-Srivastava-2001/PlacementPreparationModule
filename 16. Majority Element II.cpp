class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int>count;
        for(int i=0;i<n;i++)
        {
            count[nums[i]]++;
        }
        for(auto it:count)
        {
            if(it.second>n/3)
            {
                v.push_back(it.first);
            }
        }
        return v;
    }
};
