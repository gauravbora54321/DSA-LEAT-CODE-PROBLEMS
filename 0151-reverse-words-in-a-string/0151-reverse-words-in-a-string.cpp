class Solution {
public:
    string reverseWords(string s) { // s = " hello world "
    reverse(s.begin(),s.end());
        int n = s.length();
        string ans = "";
        for (int i = 0; i < n; i++) {
            string word = "";
            while (i < n && s[i] != ' ' ) {
                word = word + s[i];// substring banayega
                i++;
            }

            reverse(word.begin(), word.end());
            if (word.length() > 0) {
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};