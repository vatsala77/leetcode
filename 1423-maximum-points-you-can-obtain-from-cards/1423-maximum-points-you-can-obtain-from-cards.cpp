class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rs=0,ls=0;
           for(int i=0;i<k;i++){
            ls+=cardPoints[i];
        }
        int n = cardPoints.size();
        int j= n-1;
        int sum=ls;
        for(int i=k-1;i>=0;i--){
            ls-= cardPoints[i];
            rs+= cardPoints[j--];
            sum= max(sum,ls+rs);
        }
        return sum;
    }
};