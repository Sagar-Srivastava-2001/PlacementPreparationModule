class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count_rotten = 0;
        int count_total = 0;
        int minutes = 0;
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 1 || grid[i][j] == 2){
                    count_total++;
                }
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        
        while(!q.empty()){
            int k = q.size();
            count_rotten += k;
            
            while(k--){
                int x = q.front().first;
                int y = q.front().second;
                
                q.pop();
                
                for(int i=0;i<4;i++){
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    
                    if(nx < 0 || ny < 0 || ny >= grid[0].size() || nx >= grid.size() || grid[nx][ny] != 1)    continue;
                    
                    grid[nx][ny] = 2;
                    q.push({nx,ny});
                }
            }
            
            if(!q.empty())  minutes++;  
        }
        return count_rotten == count_total ? minutes : -1;
    }
};
