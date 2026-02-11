class Solution {
public:
    int atMostK(vector<int>&nums, int k){
        int i=0;
        int j=0;
        long long countOdds=0; 
        int ans=0;

        while (j < nums.size()) {
            if (nums[j] & 1) {
                countOdds++;
            }
            while (countOdds > k) {

                if (nums[i] & 1) {
                    countOdds--;
                }
                i++;
            }
            
            ans += j-i+1;
            j++;
        }

        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostK(nums,k)-atMostK(nums,k-1);
    }
};