class Solution {
    vector<int> dp;
public:
    int rob(vector<int>& nums) {
        
        for(int i = 1 ; i <= 101 ; i++)
            dp.push_back(-1);
            
        return f(0,nums);
    }
    
    int f(int i, vector <int> &nums){
        //cout << i << endl;
        
        if(i >= nums.size()) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        
        int r1 = f(i+2,nums) + nums[i];
        int r2 = f(i+1,nums);
        
        dp[i] = max(r1,r2);
        
        return  dp[i];
    }
};