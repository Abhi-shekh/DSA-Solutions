class Solution {
public:

    vector<vector<string>>res;

    bool palin(string st){
        int s=0;
        int e=st.size()-1;
        while(s<=e){
            if(st[s]!=st[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    void Solve(string &s, int idx, vector<string>&curr){
        // base case
        if(idx==s.size()){
            res.push_back(curr);
            return;
        }

        string temp="";
        for(int i=idx; i<s.size(); i++){
            temp.push_back(s[i]);
            if(palin(temp)){
                // if that partion is palindrome, store it as anser and explore others from here
                curr.push_back(temp);
                Solve(s,i+1,curr);
                curr.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<string>curr;
        Solve(s, 0, curr);
        return res;
    }
};