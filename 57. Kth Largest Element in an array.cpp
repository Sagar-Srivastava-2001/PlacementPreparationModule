class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        k--;
        for(auto x:nums){
            pq.push(x);
        }
        
        while(k--){
            pq.pop();
        }
        
        return pq.top();
        }
    }
};
