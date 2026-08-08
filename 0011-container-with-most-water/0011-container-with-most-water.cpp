class Solution {
public:
    int maxArea(vector<int>& height) {
        int high = height.size() - 1;
        int low = 0;
        int ans = INT_MIN;
        while (low < high) {
            int h = min(height[low], height[high]);
            int width = high - low;
            ans = max(ans, h * width);

            if (height[low] < height[high]) {
                low++;
            } else {
                high--;
            }
        }
        return ans;
    }
};