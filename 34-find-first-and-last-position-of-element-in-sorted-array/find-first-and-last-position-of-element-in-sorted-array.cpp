class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;

        int fir=-1;
        int sec=-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(nums[mid]==target){
                fir=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        s=0;
        e=nums.size()-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(nums[mid]==target){
                sec=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }



        return {fir,sec};
    }
};