
class Solution {
public:
    int reverse(int x) {
        int digit = 0;

        while (x != 0) {
            int n = x % 10;

            if (digit > INT_MAX / 10 ||
                (digit == INT_MAX / 10 && n > 7))
                return 0;

            if (digit < INT_MIN / 10 ||
                (digit == INT_MIN / 10 && n < -8))
                return 0;

            digit = digit * 10 + n;
            x = x / 10;
        }

        return digit;
    }
};
