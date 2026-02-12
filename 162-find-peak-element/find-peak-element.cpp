class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi=nums[0];
        int idx=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxi){
                idx=i;
            }
            maxi=max(maxi, nums[i]);

        }
        return idx;
    }
};