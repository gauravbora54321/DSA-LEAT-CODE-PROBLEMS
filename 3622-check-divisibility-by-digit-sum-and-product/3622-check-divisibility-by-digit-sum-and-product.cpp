class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;

        int t = n;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }

        if (t % (sum + product) == 0) {
            return true;
        }
        return false;
    }
};