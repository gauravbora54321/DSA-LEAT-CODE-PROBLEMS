class Solution {
public:
    void solve(vector<int>& a, int target, int i,
               vector<int>& temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (target < 0 || i == a.size()) {
            return;
        }
        temp.push_back(a[i]);
        solve(a, target - a[i], i + 1, temp, ans);
        temp.pop_back();
        while (i + 1 < a.size() && a[i] == a[i + 1])
            i++;
        solve(a, target, i + 1, temp, ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, target, 0, temp, ans);
        return ans;
    }
};