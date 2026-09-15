class Solution {
public:
 bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        if(s.length()<k || k==0)return 0;
        int cnt=0,i=0;
        while(i+k<=s.length()){
            if(isPalindrome(s,i,i+k-1)){
                cnt++;
                i+=k;
            }
            else if(i+k+1<=s.length() && isPalindrome(s,i,i+k)){
                cnt++;
                i+=k+1;
            }
            else i++;
        }
        return cnt;
    }
};