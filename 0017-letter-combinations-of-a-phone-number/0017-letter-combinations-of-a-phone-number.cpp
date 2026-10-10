
class Solution {
public:
    void solve(string digits, unordered_map<char, string> mpp,
               vector<string>& result, string& temp, int idx) {
        if (idx >= digits.size()) {
            result.push_back(temp);
            return;
        }

        char ch = digits[idx];
        string str = mpp[ch];

        for (int i = 0; i < str.size(); i++) {
            temp.push_back(str[i]);
            solve(digits,mpp,result,temp,idx+1);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> result;

        unordered_map<char, string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";

        if (digits.empty()) {
            return result;
        }

        string temp = "";
        int idx = 0;

        solve(digits, mpp, result, temp, idx);
        return result;
    }
};
