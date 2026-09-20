class Solution {
public:
    long long minimumTotalCost(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
         unordered_map<int,int>freq;
         long  long ans=0;
         int total=0;
         for(int i=0;i<n;i++){
            if(nums1[i]==nums2[i]){
                freq[nums1[i]]++;
                total++;
                ans+=i;
            }
         }
        if(total==0)return 0;
        int x=-1,f=0;
        for(auto &[val,c]:freq){
            if(f<c){
                f=c;
                x=val;
            }
        }
        int need= 2*f-total;
        if(need>0){
            for(int i=0;i<n && need>0;i++){
                if(nums1[i]!=nums2[i] && nums1[i]!=x && nums2[i]!=x){
                    ans+=i;
                    need--;
                }
            }
            if(need>0)return -1;
        }
        return ans;
    }
};