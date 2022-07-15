class Solution {
public:
    
    bool isSafe(int row, int col, vector<string> &board, int n){
        int x = row;
        int y = col;
        
        // Left Diagonal
        while(x >= 0 and y >= 0){
            if(board[x][y] == 'Q'){
                return false;
            }
            x--;
            y--;
        }
        
        x = row;
        y = col;
        
        // Same Row
        while(y >= 0){
            if(board[x][y] == 'Q'){
                return false;
            }
            y--;
        }
        
        x = row;
        y = col;
        
        // Right Diagonal
        while(x < n and y >= 0){
            if(board[x][y] == 'Q'){
                return false;
            }
            x++;
            y--;
        }
        
        return true;
    }
    
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        solve(0, board, ans, n);
        return ans;
    }
};
