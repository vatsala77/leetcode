class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int leftpro=1,rightpro=1;
      int n= nums.size();
      vector<int>ans(n,1);
      for(int i=0;i<n;i++){
        ans[i]=leftpro;
        leftpro*= nums[i];
      }   
      for(int i=n-1;i>=0;i--){
        ans[i]*= rightpro;
        rightpro*=nums[i];
      }
      return ans;
    }
};