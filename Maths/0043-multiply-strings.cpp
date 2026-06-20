class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case: overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        
        // Sign nikal lo
        bool negative = (dividend < 0) ^ (divisor < 0);
        
        // long long me convert karo taaki abs(INT_MIN) handle ho sake
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long result = 0;
        
        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            result += multiple;
        }
        
        return negative ? -result : result;
    }
};
