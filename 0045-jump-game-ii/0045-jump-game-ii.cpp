class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0,n=nums.size(),jump=0,farthest=0;
        while(r<n-1){
           farthest=r;
           for(int k=l;k<=r;k++)farthest= max(farthest,nums[k]+k);
           l=r+1;
           r=farthest;
           jump=jump+1;
        }
        return jump;
    }
};