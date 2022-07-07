class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, bool> m;
        
        for(auto x : nums){
            m[x] = true;
        }
        
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]-1) != m.end()){
                m[nums[i]] = false;
            }
        }
        
        int len = 0;
        int max_len = 0;
        
        for(auto x : m){
            if(x.second == true){
                int a = x.first;
                while(m.find(a++) != m.end()){
                    len++;
                }
                max_len = max(max_len,len);
                len = 0;
            }
        }
        return max_len;
    }
};
