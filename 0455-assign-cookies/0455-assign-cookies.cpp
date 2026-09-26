class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int p=0,r=0,c=0;
        while(p<g.size() && r<s.size()){
          if(s[r]<g[p])r++;
          else if(s[r]>=g[p]){
            c++; r++; p++;
          }
        }
        return c;
    }
};