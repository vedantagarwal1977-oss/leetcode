
class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = (dividend < 0) == (divisor < 0);

        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);

        long long ans = 0;

        while(n >= d) {
            int count = 0;

            while(n >= (d << (count + 1))) {
                count++;
            }

            ans += (1LL << count);
            n -= (d << count);
        }

        return sign ? (int)ans : (int)-ans;
    }
};
