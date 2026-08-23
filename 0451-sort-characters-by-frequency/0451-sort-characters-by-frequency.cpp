class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for (auto ch : s) {
            mpp[ch]++;
        }
        string ans = "";
        while(!mpp.empty()){
        char maxchar = 0;
        int maxfreq = 0;

        for (auto it : mpp) {
            if (it.second > maxfreq) {
                maxfreq = it.second;
                maxchar = it.first;
            }
        }
        while (maxfreq--) {
            ans.push_back(maxchar);
        }
        mpp.erase(maxchar);
        
        }return ans;
    }
};