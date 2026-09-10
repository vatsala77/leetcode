class Solution {
public:
void f(int ind,vector<int>ds,vector<int>&nums,vector<vector<int>>&res,int n){
        res.push_back(ds);
    
    for(int i=ind;i<n;i++){
        if(i!=ind && nums[i]==nums[i-1])continue;
        ds.push_back(nums[i]);
        f(i+1,ds,nums,res,n);
        ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        f(0,ds,nums,res,n);
        return res;
    }
};