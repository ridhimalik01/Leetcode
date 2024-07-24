class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        unordered_map<int,string> mp;
        string temp = "";
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                int pos = s[i] - '0';
                mp[pos] = temp;
                temp = "";
            }
            else if(isalpha(s[i]))
            {
                temp = temp + s[i];
            }
        }
        string result = "";
        for(int i=1; i<=mp.size();i++)
        {
            result = result + mp[i] + " ";
        }
        result.pop_back();
        return result;
    }
};