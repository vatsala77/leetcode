class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int n=nums.size();
        while(l<=r){
            if(nums[l]%2!=0){
                swap(nums[l],nums[r]);
                r--;
            }
            else l++;
        }
        return nums;
    }
};