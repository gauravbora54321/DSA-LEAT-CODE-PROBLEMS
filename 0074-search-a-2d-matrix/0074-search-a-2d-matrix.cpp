class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();    // 3
        int m = mat[0].size(); // 4
        int low = 0;
        int high = m * n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mat[mid / m][mid % m] == target)
                return true;
            else if (mat[mid / m][mid % m] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};
