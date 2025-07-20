class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        if(rows == 0 || cols == 0) return false;

        int row = rows-1;
        int col = 0;

            while(col<cols && row>=0){

                if(matrix[row][col]==target) return true;

                else if(matrix[row][col]>target) row--;

                else col++;
            }
        return false;
        }
    
};
