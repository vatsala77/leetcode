class Solution {
public:
int atMostKDistinct(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int l = 0, count = 0;
  for(int r=0;r<nums.size();r++){
    if(freq[nums[r]]==0)k--;
    freq[nums[r]]++;
    while(k<0){
        freq[nums[l]]--;
        if(freq[nums[l]]==0)k++;
        l++;
    }
    count+= r-l+1;
  }
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }
};