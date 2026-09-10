class Solution {
public:
void f(int i , int k,int n,vector<vector<int>>&ans,vector<int>&ds){
 if(ds.size()==k){
    if(n==0)ans.push_back(ds);
    return;
 }
 if(i>9 || n<0)return ;
 ds.push_back(i);
 f(i+1,k,n-i,ans,ds);
 ds.pop_back();
 f(i+1,k,n,ans,ds);
}
    vector<vector<int>> combinationSum3(int k, int n) {
      
        vector<vector<int>>ans;
        vector<int>ds;
        f(1,k,n,ans,ds);
        return ans;
    }
};