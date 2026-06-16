class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1;
        int sum = 0;
        while (n != 0)
        {
            int last = n % 10;
            n /= 10;
            product *= last;
            sum += last;
        }
        int result=product - sum ;
        return result;
    }
};
