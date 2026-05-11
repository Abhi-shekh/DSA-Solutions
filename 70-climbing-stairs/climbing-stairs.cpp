class Solution {
public:
    int Solve(int n, vector<int>&dp){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]= Solve(n-1, dp)+ Solve(n-2, dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return Solve(n, dp);
    }
};