class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        int i = 0;
        int ans;
        
        while(i < k){
            ans = pq.top();
            pq.pop();
            i++;
        }
        
        return ans;
    }
};
