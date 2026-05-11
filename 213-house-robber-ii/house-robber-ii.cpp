class Solution {
public:
    int fn(vector<int>&nums, int idx, int st, vector<int>&dp){
        if(idx<st){
            return 0;
        }

        if(dp[idx]!=-1){
            return dp[idx];
        }

        int take= nums[idx]+fn(nums, idx-2, st, dp);
        int notTake= fn(nums, idx-1, st, dp);

        return dp[idx]=max(take, notTake);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        int primary = fn(nums, n - 2, 0, dp1);
        int secondary = fn(nums, n - 1, 1, dp2);

        return max(primary, secondary);
    }
};