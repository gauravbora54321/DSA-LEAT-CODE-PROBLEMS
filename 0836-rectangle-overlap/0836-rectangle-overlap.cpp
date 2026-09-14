class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {

        // x - axsis ke liye
        int left = max(a[0], b[0]);
        int right = min(a[2], b[2]);
        // y ke liye
        int bottom = max(a[1], b[1]);
        int top = min(a[3], b[3]);

        return left < right && bottom < top;
    }
};