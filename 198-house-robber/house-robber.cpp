class Solution {
public:
    int fn(vector<int>&nums, int idx, int maxi, vector<int>&dp){
        if(idx<0){
            return maxi;
        }

        if(dp[idx]!=-1){
            return dp[idx];
        }

        int take= nums[idx]+fn(nums, idx-2, maxi, dp);
        int notTake= fn(nums, idx-1, maxi, dp);

        return dp[idx]=max(take, notTake);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fn(nums, nums.size()-1, 0, dp);
        
    }
};