class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0; int prod=1;
        while(n!=0)
        {
            int dig=n%10;
            sum+=dig;
            prod*=dig;
            n/=10;
        }
        return prod-sum;
    }
};