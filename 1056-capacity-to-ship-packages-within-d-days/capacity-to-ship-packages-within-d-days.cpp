class Solution {
public:
     int getDays(vector<int>&weights, int mid){
        int sum=0;;
        int count=0;
        for(int i=0; i<weights.size(); i++){
            sum+=weights[i];
            if(sum<=mid){
                continue;
            }else{
                count++;
                sum=weights[i];
            }

            
        }
        count++;
        return count;
     }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(), weights.end());
        int e=accumulate(weights.begin(), weights.end(), 0);

        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;

            int totalDays=getDays(weights, mid);
            if(totalDays<=days){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};