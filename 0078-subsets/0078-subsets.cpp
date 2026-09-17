class Solution {
public:
    void solve(vector<int>& a, int i, vector<vector<int>>& ans,
               vector<int>& temp) {

        if (i >= a.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(a[i]);
        solve(a, i + 1, ans, temp);
        temp.pop_back();
        solve(a, i + 1, ans, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, 0, ans, temp);
        return ans;
    }
};