class Solution {
    vector < vector <int>> dp{201,vector <int>(1001,-1)};
public:
    int combinationSum4(vector<int>& nums, int target) {
        return f(0,target,nums);
    }
    
    int f(int i, int w,vector <int> &nums){
        //cout << i << " " << w << endl;
        if(w < 0 || i == nums.size()) return 0;
        if(w == 0) return 1;
        
        if(dp[i][w]!=-1)return dp[i][w];
        
        int result = 0;
        for(int i=0;i < nums.size();i++){
            result += f(0,w-nums[i],nums);
        }
        //int r1 = f(i,w-nums[i],nums);
       // int r3 = f(i+1,w-nums[i])+1;
        //int r2 = f(i+1,w,nums);
        dp[i][w] = result;
        return dp[i][w];
    }
};