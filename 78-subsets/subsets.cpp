class Solution {
public:
vector<vector<int>>res;

    
    void Solve(vector<int>&nums, int idx, vector<int>&ans){
        // base case
        res.push_back(ans);
        for(int i=idx; i<nums.size(); i++){

            ans.push_back(nums[i]);
            Solve(nums, i+1, ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        Solve(nums, 0, ans);
        return res;

    }
};