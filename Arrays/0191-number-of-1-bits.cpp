class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
         while(n != 0) {//repeat this loop while the value of n is not equal to 0
           if(n & 1) {//n&1 returns either 1(True) or 0(False) if its 1 execute the body of loop
        count++;
          }
          n >>= 1;
        }
        return count ;
    }
};
