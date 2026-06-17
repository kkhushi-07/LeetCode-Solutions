class Solution {
public:
    int differenceOfSums(int n, int m) {
        int h=0,nh=0;
    for(int i=1;i<=n;i++) 
    {
        if(i%m==0){
            h+=i;
        }
        else{
            nh+=i;
        }
    }
    int result= nh-h;
    return result;
}
};
