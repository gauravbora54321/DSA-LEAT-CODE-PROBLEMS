class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        for (int i = 0; i < 32; i++) { // n=6 binary = 110
            ans <<= 1;                 // left shift krnege hum answer ko // 000
            ans =
                ans |
                (n & 1); // (n&1)= last element of answer ko picke krenge  then
                         // ans k sath or opeertaion perd=from krenge   n&1 = 0
            n >>= 1;     // right shift krnege n ko
        }
        return ans;
    }
};