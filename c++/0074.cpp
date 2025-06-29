class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int st = 0, end = (rows * cols) - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            int row = mid / cols; // get row no
            int col = mid % cols; // get col no
            // (/)gives us the round of division
            // and how many rows we've passed
            // (%)gives us the remainder 
            // and how far in the current row we are

            int midValue = matrix[row][col];

            if (matrix[row][col] > target) {
                end = mid - 1;
            } else if (matrix[row][col] < target) {
                st = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
