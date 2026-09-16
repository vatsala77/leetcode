class Solution {
public:
int func(vector<int>&arr,int goal){
  if(goal<0)return 0;
  int n=arr.size();
  int l=0,r=0,cnt=0,sum=0;
  while(r<n){
    sum+= arr[r]%2;
    while(sum>goal){
        sum-=arr[l]%2;
        l++;
    }
    cnt+= r-l+1;
    r++;
  }
    return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
   return func(nums,k)-func(nums,k-1);
    }
};
