vector<int> Solution::dNums(vector<int> &nums, int k) {
    
    int n = nums.size();
    if(k > n)   return {};
    vector<int> ans;
    map<int,int> m;
    
    for(int i=0;i<n;i++){
        m[nums[i]]++;
        
        if(i+1 >= k){
            ans.push_back(m.size());
            m[nums[i-k+1]]--;
            if(m[nums[i-k+1]] == 0)   m.erase(nums[i-k+1]);
        }        
    }
    
    return ans;
}
