class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi=0;
        for(char c:s){
            if(c=='('){
                st.push(c);
                maxi= max((int)st.size(),maxi);
        }
        else if(c==')'){
         if(!st.empty())   st.pop();
        }
        }
        return maxi;
    }
};