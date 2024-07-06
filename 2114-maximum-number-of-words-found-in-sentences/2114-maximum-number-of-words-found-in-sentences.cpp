class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max=0;
        for(int i=0;i<n;i++){
            int c=count(begin(sentences[i]),end(sentences[i]),' ');
            if (c>max){
                max=c;
            }
        }
        return max+1;
    }
};