class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        for (int i = 0; ; i++) { // blank because loop runs till it return
            int multiple = k*(i + 1);
            bool found = false;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == multiple) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return multiple;
            }
        }
    }
};