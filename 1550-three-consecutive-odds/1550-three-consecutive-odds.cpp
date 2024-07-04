class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;(i<n)&&(cnt<3);i++){
            if(arr[i]%2!=0){
                cnt+=1;
            }
            else{
                cnt=0;
            }
        }
        if(cnt==3){
            return true;
        }
        else{
            return false;
        }
    }
};