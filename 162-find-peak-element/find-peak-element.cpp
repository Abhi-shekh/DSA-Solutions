class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[ans]){
                ans=i;
            }
        }
        return ans;
    }
};