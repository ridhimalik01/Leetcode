class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]==t[j]){
                    int diff=abs(i-j);
                    sum+=diff;
                }
            }
        }
        return sum;
    }
};