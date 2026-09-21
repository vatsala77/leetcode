class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long  long >res(k,0);
        vector<long long > cnt(k,0);
        int n= nums.size();
        for(int a:nums){
            vector<long long >newa(k,0);
            for(int r=0;r<k;r++){
                if(cnt[r]){
                    newa[(r*(a%k))%k]+=cnt[r];
                }
            }
                newa[a%k]+=1;
                cnt=newa;
        for(int r=0;r<k;r++) res[r] += cnt[r];
            }
        return res;
    }
};