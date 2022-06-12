class Solution {
    vector <vector <int>> dp{101,vector <int> (101,-1)};
    int x,y;
public:
    int uniquePaths(int m, int n) {
        x = m ;
        y = n ;
        return f(0,0);
    }
    
    int f(int i,int j){
        if (i == x-1 && j == y-1) return 1;
        
        if(i > x-1 || j > y-1) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        dp[i][j] = f(i+1,j) + f(i,j+1);
        return dp[i][j];
    }
};