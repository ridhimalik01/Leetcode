class Solution {
public:
    int mySqrt(int x) {
        long long y = (long long)x; //8
        int lo = 0, hi = x; // 8
        while(lo<=hi){
            long long mid = lo + (hi-lo)/2; //3
            long long mul = mid*mid; //9
            if(y==mul) return (int)mid;
            else if(y < mul) hi = mid-1;
            else if(y>mul) lo = mid + 1;
        }
        return hi;
    }
};