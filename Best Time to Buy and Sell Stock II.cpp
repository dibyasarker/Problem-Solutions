class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector < vector <int>> dp = vector < vector <int>> (n,vector <int>(2,-1));

        return dfs(0,false,prices,dp);
    }

    int dfs(int i, bool isSelling, vector < int> &prices, vector < vector <int>> &dp){
        if(i == prices.size()) return 0;

        if(dp[i][isSelling] != -1) return dp[i][isSelling];

        int first = 0;
        if(isSelling)
            first += prices[i] + dfs(i + 1, !isSelling,prices,dp);
        else first += -prices[i] + dfs(i+1,!isSelling,prices,dp);

        int second = dfs(i+1,isSelling,prices,dp);

        dp[i][isSelling] = max(first,second);

        return dp[i][isSelling];


    }
};