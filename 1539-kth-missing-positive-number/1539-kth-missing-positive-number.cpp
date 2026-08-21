class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        /*  for (int i = 0; i < arr.size(); i++) {
              if (arr[i] <= k) {
                  k++;
              } else {
                  break;
              }
          }
          return k;*/
        int low = 0;
        int high = arr.size() - 1; //4  
        while (low <= high) { //0<=4
            int mid = low + (high - low) / 2;// 2index = 4   // low = 3+(4-3)/2
            int missing = arr[mid] - (mid + 1);// 4-(2+1)=1
            if (missing < k) { //1<k
                low = mid + 1;  // from this now mid=2 and now low = 2+1=3

            } else {
                high = mid - 1;   
            }
        }
        return high + 1 + k;
    }
};