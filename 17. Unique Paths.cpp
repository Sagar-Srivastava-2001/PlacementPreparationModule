class Solution {
public:
    
    // Memoization
    
    int solve(int i, int j, vector<vector<int>> &dp){
        if(i == 0 and j == 0){
            return 1;
        }
        
        if(i < 0 || j < 0)
            return 0;
        
        if(dp[i][j] > -1){
            return dp[i][j];
        }
        
        int left = solve(i,j-1,dp);
        int up = solve(i-1,j,dp);
        return dp[i][j] = left + up;
    }
    
    // Tabulation
    int solve(int m, int n){
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0] = 1;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == 0 and j == 0){
                    continue;
                }
                if(i-1 >= 0){
                    dp[i][j] += dp[i-1][j];
                }
                
                if(j-1 >= 0){
                    dp[i][j] += dp[i][j-1];
                } 
            }
        }
        
        return dp[m-1][n-1];
    }
    
    // Space Optimization
    int uniquePaths(int m, int n) {
        vector<int> prev(n,0); 
        for(int i=0;i<m;i++){
            vector<int> curr(n,0); 
            for(int j=0;j<n;j++){
                if(i==0 and j==0){
                    curr[0] = 1;
                }
                else{
                    int up = 0, left = 0;
                    if(i > 0) up = prev[j];
                    if(j > 0) left = curr[j-1];
                    curr[j] = up + left;
                }
            }
            prev = curr;
        }
        return prev[n-1];
    } 
};
