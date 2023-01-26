class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach = 0,n = nums.size();
        

        for(int i = 0 ; i < n ; i++){
            if(i <= maxreach)
                maxreach = max(maxreach,nums[i] + i);
        }

        //cout << maxreach << endl;
        return maxreach >= n - 1 ? true : false;
    }
};