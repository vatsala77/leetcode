class Solution {
public:
       bool solve(string s, vector<string>& wordDict, unordered_map<string,bool>& dp) {
        if (s.size() == 0) return true;
        if (dp.find(s) != dp.end()) return dp[s];
        for (string word : wordDict) {
            if (s.find(word) == 0) {
                string remaining = s.substr(word.size());
                if (solve(remaining, wordDict, dp)) return dp[s] = true;
            }
        }
        return dp[s] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,bool> dp;
        return solve(s, wordDict, dp);
    }

};