class Solution {
public:
    int n;

    void f(int index, int open, int close, int bal, string &curr,
           const string &s, unordered_set<string> &res) {
        // prune: prefix invalid
        if (bal < 0) return;
        // prune: not enough chars left to do the required removals
        if (open + close > n - index) return;

        if (index == n) {
            if (open == 0 && close == 0 && bal == 0) res.insert(curr);
            return;
        }

        char ch = s[index];

        // not take (remove this char)
        if (ch == '(' && open > 0)
            f(index + 1, open - 1, close, bal, curr, s, res);
        else if (ch == ')' && close > 0)
            f(index + 1, open, close - 1, bal, curr, s, res);

        // take
        curr.push_back(ch);
        if (ch == '(')
            f(index + 1, open, close, bal + 1, curr, s, res);
        else if (ch == ')')
            f(index + 1, open, close, bal - 1, curr, s, res);
        else
            f(index + 1, open, close, bal, curr, s, res);
        curr.pop_back();
    }

    vector<string> removeInvalidParentheses(string s) {
        n = s.size();
        int open = 0, close = 0;
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') {
                if (open > 0) open--;
                else close++;
            }
        }

        unordered_set<string> ans;
        string curr = "";
        f(0, open, close, 0, curr, s, ans);
        return vector<string>(ans.begin(), ans.end());
    }
};