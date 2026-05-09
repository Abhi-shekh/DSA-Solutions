class Solution {
public:
vector<vector<int>>res;

    void Solve(int k, int n, int idx, vector<int>&temp){
        // base case
        if(n==0 && k==0){
            res.push_back(temp);
            return;
        }

        // calling for loop rec.
        for(int i=idx; i<=9; i++){
            temp.push_back(i);
            Solve(k-1, n-i, i+1, temp);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        Solve(k, n, 1, temp);
        return res;
    }
};