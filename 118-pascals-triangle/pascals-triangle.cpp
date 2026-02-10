class Solution {
public:
    int ncr(int n, int r){
        int ans=1;
        for(int i=0; i<r; i++){
            ans=ans*(n-i);
            ans=ans/(i+1);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});

        for(int i=1; i<numRows; i++){
            vector<int>temp;
            for(int j=0; j<=i; j++){
                temp.push_back(ncr(i,j));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};