class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        double ans=1;
        if(n>0){
            for(int i=0; i<n; i++){
                ans*=x;
            }
        }
        else{
            for(int i=0; i<abs(n); i++){
                ans=ans/x;
            }
        }
        
        return ans;
    }
};