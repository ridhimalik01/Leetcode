class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int mid=n/2;
        for(int i=0;i<mid;i++){
            char temp=s[i];
            s[i]=s[n-1-i];
            s[n-i-1]=temp;
        }
    }
};