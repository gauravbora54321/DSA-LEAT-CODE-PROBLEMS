class Solution {
public:
    void solve(string str, int open, int close, int n, vector<string>& ans) {

        if (str.size() == 2 * n) {
            ans.push_back(str);
            return;
        }
        if (open < n) {
            solve(str + "(", open + 1, close, n, ans);
        }
        if (close < open) {
            solve(str + ")", open, close + 1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve("", 0, 0, n, ans);
        return ans;
    }
};
