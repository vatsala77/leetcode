class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int>minlen(n,INT_MAX);
        int left=0,sum=0,bestsofar=INT_MAX,result=INT_MAX;
        for(int right=0;right<n;right++){
            sum+=arr[right];
            while(sum>target){
                sum-=arr[left];
                left++;
            }
            if(sum==target){
                int len=right-left+1;
            if(left>0 && minlen[left-1]!=INT_MAX)
                result=min(result,len+minlen[left-1]);
                bestsofar=min(bestsofar,len);
            }

              minlen[right]=bestsofar;
        }
        return result== INT_MAX? -1: result;
    }
};