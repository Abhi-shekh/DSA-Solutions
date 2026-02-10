class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();

        int majElem1=0;
        int majElem2=1;

        int cnt1=0;
        int cnt2=0;

        for(int i=0; i<nums.size(); i++){
            if(cnt1==0 && nums[i]!=majElem2){
                majElem1=nums[i];
                cnt1++;
            }
            else if(cnt2==0 && nums[i]!=majElem1){
                majElem2=nums[i];
                cnt2++;
            }
            else if(nums[i]==majElem1){
                cnt1++;
            }
            else if(nums[i]==majElem2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0, cnt2=0;
        for(auto i: nums){
            if(i==majElem1){
                cnt1++;
            }
        }
        for(auto i: nums){
            if(i==majElem2){
                cnt2++;
            }
        }

        if(cnt1>(n/3)){
            ans.push_back(majElem1);
        }
        if(cnt2>(n/3)){
            ans.push_back(majElem2);
        }
        return ans;
    }
};