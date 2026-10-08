class Solution {
public:
void solve(int ind,string digits,string map[],vector<string>&ans,string ds){
    if(ind==digits.length()){
        ans.push_back(ds);
        return;
    }
   
    int n= digits[ind]-'0';
    string temp= map[n];
    for(int i=0;i<temp.size();i++){
      ds.push_back(temp[i]);
      solve(ind+1,digits,map,ans,ds);
      ds.pop_back();
    }
    
}
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)return ans;
        string ds;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,digits,map,ans,ds);
        return ans;
    }
};