class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(nums[mid] == target){
                return true;
            }

            // Handle duplicates
            if(nums[mid] == nums[s] && nums[s] == nums[e]){
                s++;
                e--;
                continue;
            }

            // identify sorted half
            if(nums[mid] >= nums[s]){
                // left is sorted
                if(nums[s] <= target && target < nums[mid]){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
            else{
                // right is sorted
                if(nums[mid] < target && target <= nums[e]){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
        }
        return false;
    }
};
