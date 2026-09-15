class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,n=fruits.size();
        unordered_map<int,int>freq;
        int maxfruits=0;
        for(int right=0;right<n;right++){
            freq[fruits[right]]++;
            while(freq.size()>2){
                freq[fruits[left]]--;
                if(freq[fruits[left]]==0)
                freq.erase(fruits[left]);
                left++;
            }
            maxfruits= max(maxfruits,right-left+1);
        }
        return maxfruits;
    }
};