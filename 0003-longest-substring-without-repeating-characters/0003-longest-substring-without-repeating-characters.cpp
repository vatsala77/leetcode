class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int len =0;
      int n= s.length();
      int i=0;
      unordered_map<char ,int>mp;
      for(int j=0;j<n;j++){
         char c=s[j];
         mp[c]++;
         while(mp[c]>1){
            mp[s[i]]--;
            i++;
         }
         len= max(len,j-i+1);
      }
      return len;
    }
    
};