class Solution {
public:
int memo[100][100][205];
int n,m;
 bool solve(int r,int c,int open,vector<vector<char>>&grid){
 if(r>=n || c>=m)return false;
 if(grid[r][c]=='(')open++;
 else open--;
 if(open<0)return false;
 if(r==n-1 && c==m-1)return open==0;
 if(memo[r][c][open]!=-1)return memo[r][c][open];
 bool down=solve(r+1,c,open,grid);
 bool right=solve(r,c+1,open,grid);
 return memo[r][c][open]=(down||right);
 }
    bool hasValidPath(vector<vector<char>>& grid) {
         n= grid.size();  m=grid[0].size();
        if((m+n-1)%2!=0)return false;
        if(grid[0][0]==')'|| grid[n-1][m-1]=='(')return false;


        memset(memo,-1,sizeof(memo));
        return solve(0,0,0,grid);
    }
};