class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int result = 0;
        int t = n;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        result = sum + product;
        if (t % (result ) == 0) {
            return true;
        }
        return false;
    }
};