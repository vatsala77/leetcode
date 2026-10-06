class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n= nums.size();
        vector<int>s = nums;
        int i= (n+1)/2 -1;
        int j= n-1;
        sort(s.begin(),s.end());
        for(int k=0;k<n;k++){
            nums[k]= (k%2==0)? s[i--]:s[j--];
        }
 
    }
};