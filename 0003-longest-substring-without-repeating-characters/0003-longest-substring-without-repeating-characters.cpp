class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxlen=0;
        unordered_map<char,int>freq;
        for(int j=0;j<s.length();j++){
            int c=s[j];
            freq[c]++;
            while(freq[c]>1){
                freq[s[i]]--;
                i++;
            }
            maxlen=max(maxlen, j-i+1);
        }
        return maxlen;
    }
};