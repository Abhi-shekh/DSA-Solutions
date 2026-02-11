class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int prod=1;
        int count=0;

        while(j<nums.size()){
            prod=prod*nums[j];

            // shrink logic : check if prod exceeds k, then shrink the window
            while(i<j && prod>=k){
                prod=prod/nums[i];
                i++;
            }

            if(prod<k){
                count+=j-i+1;
            }
            j++;
        }
        return count;
    }
};