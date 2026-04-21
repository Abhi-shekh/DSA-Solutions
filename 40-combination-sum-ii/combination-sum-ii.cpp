class Solution {
public:
vector<vector<int>>res;
    void Solve(vector<int>&nums, int target, vector<int>&ans, int idx){
        if(target==0){
            res.push_back(ans);
            return;
        }
        if(target<0){
            return;
        }

        for(int i=idx; i<nums.size(); i++){
            if(i>idx && nums[i]==nums[i-1]){
                continue;
            }
            ans.push_back(nums[i]);
            Solve(nums, target-nums[i], ans, i+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ans;
        sort(candidates.begin(), candidates.end());
        Solve(candidates, target, ans,0);
        return res;
    }
};