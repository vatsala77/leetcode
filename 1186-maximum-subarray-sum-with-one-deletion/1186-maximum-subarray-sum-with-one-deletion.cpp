class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n= arr.size();
        if(n==1)return arr[0];
        int with_delete=arr[0];
        int without_delete=arr[0];
        int max_sum=arr[0];
        for(int i=1;i<n;i++){
            int next_with_delete= max(without_delete,with_delete+arr[i]);
            int next_without_delete=max(without_delete+arr[i],arr[i]);
            without_delete = next_without_delete;
            with_delete = next_with_delete;
            max_sum=max(max_sum,max(without_delete,with_delete));
        }
        return max_sum;
    }
};