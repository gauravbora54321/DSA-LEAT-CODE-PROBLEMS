class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five++;
            } else if (bills[i] == 10) {
                if (five == 0) {
                    return false;
                } else {
                    five--;
                    ten++;
                }
            } else {
                if (5 * five + 10 * ten < 15 || !five) {
                    return false;
                } else {
                    if (ten) {
                        ten--;
                        five--;
                    } else {
                        five -= 3;
                    }
                }
            }
        }
        return true;
    }
};