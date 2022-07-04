class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int Min = INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            Min = min(Min, prices[i]);
            
            if(prices[i] > Min){
                ans = max(ans,prices[i] - Min);
            }
        }
        return ans;
    }
};
