class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size() ==1)
            return nums[0];
        else if(nums.size() == 2)
            return max(nums[0],nums[1]);
        else {
            int r1 = withFirst(nums);
            cout << endl;
            int r2 = withoutFirst(nums);
            return max(r1,r2); 
        }
        
        
        
    }
    
    int withFirst(vector <int> &nums){
        int n =  nums.size();
        int sPrev = 0;
        int fPrev = nums[0];
        int msf = max(sPrev,fPrev);
        for (int i=1 ; i < n-1 ; i++){
            cout << msf << " * " << fPrev << " " << sPrev << endl;
            msf = max(nums[i]+sPrev,fPrev);
            sPrev = fPrev;
            fPrev = msf;
            cout << msf << " * " << fPrev << " " << sPrev << endl;
        }
        
        return msf;
    }
    
    int withoutFirst(vector <int> &nums){
        int n =  nums.size();
        int sPrev = nums[1];
        int fPrev = max(nums[1],nums[2]);
        int msf = max(sPrev,fPrev);
        for (int i=3 ; i < n ; i++){
            cout << msf << " * " << fPrev << " " << sPrev << endl;
            msf = max(nums[i]+sPrev,fPrev);
            sPrev = fPrev;
            fPrev = msf;
            cout << msf << " * " << fPrev << " " << sPrev << endl;
        }
        
        return msf;
    }
};