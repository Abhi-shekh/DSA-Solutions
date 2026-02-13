class Solution {
public:
    int bloomedFlower(vector<int>&bloomDay, int k, int mid){
        int count=0;
        int flowers=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid){
                count++;
            }else{
                flowers+=count/k;
                count=0;
            }
        }
        flowers+=count/k;
        return flowers;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        // range
        int s=*min_element(bloomDay.begin(), bloomDay.end());
        int e=*max_element(bloomDay.begin(), bloomDay.end());
        int minDay=-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            int bloomed=bloomedFlower(bloomDay,k,mid);

            if(bloomed<m){
                s=mid+1;
            }
            else{
                minDay=mid;
                e=mid-1;
            }
        }
        return minDay;
    }
};