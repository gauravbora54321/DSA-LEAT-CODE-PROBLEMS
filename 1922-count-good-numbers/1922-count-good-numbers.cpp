class Solution {
public:
    long long mod = 1e9 + 7;
    long long power(long long a, long long b) {
        long long ans = 1;
        while (b > 0) {
            if (b % 2 == 1)
                ans = (ans * a) % mod;
            a = (a * a) % mod;
            b = b / 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd = n / 2;
        long long even = (n + 1) / 2;
        long long a = power(5, even);  
        long long b = power(4, odd);   

        return (a * b) % mod;
    }
};