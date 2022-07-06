class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = 0;
        int c = matrix[0].size()-1;
        bool ans = false;
        
        while(r>=0 and c>=0 and r < matrix.size() and c < matrix[0].size()){
            if(matrix[r][c] == target){
                ans = true;
                break;
            }
            else if(matrix[r][c] > target){
                c--;
            }
            else if(matrix[r][c] < target){
                r++;
            }
        }
        
        return ans; 
    }
};
