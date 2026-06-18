class Solution {
public:
    bool isPalindrome(int x) {
        // Negative ya 10 se divisible but 0 nahi -> palindrome nahi
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        // Even digits: x == reversed
        // Odd digits: x == reversed/10  jaise 12321 -> x=12, reversed=123
        return x == reversed || x == reversed / 10;
    }
};
