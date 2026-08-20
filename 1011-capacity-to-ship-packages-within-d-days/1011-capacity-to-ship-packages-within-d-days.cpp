class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = * max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low<high){
            int mid = low +( high - low)/2;
           int cur_weight=0;
           int reqdays=1;
           for (int weight : weights){
            if(cur_weight+weight > mid){
                reqdays++;
                cur_weight =0;
            }
            cur_weight+= weight;
           }
           if (reqdays<=days){
             high = mid;
           }
            else{
                low=mid+1;
            }
        }
        return low;
        }
    
};