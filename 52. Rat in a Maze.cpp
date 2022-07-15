class Solution{
    public:
    
    void solve(int r, int c, vector<vector<int>> &grid, vector<string> &ans, string s, vector<vector<bool>> &visited){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0 || visited[r][c] == 1){
            return;
        }
        
        if(r == grid.size()-1 and c == grid[0].size()-1){
            ans.push_back(s);
            return;
        }
        
        visited[r][c] = 1;
        
        solve(r+1, c, grid, ans, s + "D", visited);       // Down
        solve(r, c+1, grid, ans, s + "R", visited);      // Right
        solve(r, c-1, grid, ans, s + "L", visited);      // Left
        solve(r-1, c, grid, ans, s + "U", visited);      // Up
        
        visited[r][c] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &grid, int n) {
        vector<string> ans;
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        
        solve(0,0,grid,ans,"",visited);
        return ans;
    }
};
