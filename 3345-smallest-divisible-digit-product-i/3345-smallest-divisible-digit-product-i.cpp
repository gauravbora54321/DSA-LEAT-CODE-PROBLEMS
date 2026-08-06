class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        for (int i = n; i < n + 10; i++) {
            int j = i;
            int p = 1;
            while (j > 0) {
                int m = j % 10; // 5--1
                p *= m;         // 5 --5
                j /= 10;        // 1 -0
            }
            if (p % t == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};