class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;

        int n=nums.size();

        // Handling edge cases
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                // we will need to write edge case for 1st and 2nd element as well
                return nums[mid];
            }

            if(!(mid&1)){
                // even idx
                if(nums[mid]==nums[mid-1]){
                    // single elem in left part
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    // single elem in left part
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};