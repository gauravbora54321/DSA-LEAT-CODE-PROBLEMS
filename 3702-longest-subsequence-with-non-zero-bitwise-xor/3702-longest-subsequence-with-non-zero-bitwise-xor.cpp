class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int TotalXOR = 0;
        bool flag = false;

        for (int num : nums) {
            TotalXOR ^= num;
            if (num != 0) {
                flag = true;
            }
        }
        if (!flag) {
            return false;
        }

        if (TotalXOR != 0) {
            return nums.size();
        }
        return nums.size() - 1;
    }
};