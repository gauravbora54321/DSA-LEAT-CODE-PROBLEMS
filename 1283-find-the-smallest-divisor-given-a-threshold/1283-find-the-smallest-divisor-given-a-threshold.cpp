class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high =
            *max_element(nums.begin(), nums.end()); // max element dega //9
        int ans = high;                             // 9
        while (low <= high) {                       // 1<=9
            int mid = low + (high - low) / 2;       // 5
            int sum = 0; // initilizing the sum from 0
            for (auto num :
                 nums) { // auto apne app detect krega datatype aur nums are m
                         // traverse krega aur ek ek elemnet pick krega
                sum += (num + mid - 1) / mid; // 1 ,//2,//3 ,//5
            }
            if (sum <= threshold) { // checking the sum is less then threshold
                ans = mid;          //5
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

}
;