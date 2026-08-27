class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(); // 5
        int m = mat[0].size();
        int row = n - 1; // 4
        int col = 0;
        while (row >= 0 && col < m) {
            if (mat[row][col] == target) { // mat[4][0]
                return true;
            } else if (mat[row][col] < target) {
                col++;
            } else {
                row--;
            }
            
        }
        return false;
    }
};