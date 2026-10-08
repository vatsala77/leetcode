class Solution {
public:
    string removeOuterParentheses(string s) {
        using namespace std;
        string result = "";
        int open = 0;
        int last = 0;    
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open++;
            } else {
                open--;
            }         
            if (open == 0) {
                result += s.substr(last + 1, i - last - 1);
                last = i + 1;
            }
        }      
        return result;
    }
};