class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Next Maxima approach
        int maxi=INT_MIN;
        int ans=0;
        for(int i=prices.size()-1; i>=0; i--){
            maxi=max(maxi, prices[i]);
            ans=max(ans, maxi-prices[i]);
        }
        return ans;
    }
};