class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=INT_MAX;
        int second=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                first=min(i,first);
                second=max(i, second);
            }
        }
        first= (first==INT_MAX) ? -1 : first;
        return {first, second};
    }
};