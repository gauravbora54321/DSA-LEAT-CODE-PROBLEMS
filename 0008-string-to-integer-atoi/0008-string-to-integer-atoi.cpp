class Solution {
public:
    void isDigit(int i, long long& num, string& s) {
        if (s[i] < '0' || s[i] > '9') {
            return;
        }
        if (num > INT_MAX) {
            return;
        }
        num *= 10;
        num += s[i] - '0';
        isDigit(i + 1, num, s);
    }

    int myAtoi(string s) {
        int i = 0;
         int sign = 1;
        long long num = 0;
       

        // remove white space
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        // sign

        if (s[i] == '-') {
            sign = -1;
            i = i + 1;
        } else if (s[i] == '+') {
            i = i + 1;
        }
        isDigit(i, num, s);
        if (num > INT_MAX && sign == -1) {
            return INT_MIN;
        } else if (num > INT_MAX && sign == 1) {
            return INT_MAX;
        }

        return num * sign;
    }
};