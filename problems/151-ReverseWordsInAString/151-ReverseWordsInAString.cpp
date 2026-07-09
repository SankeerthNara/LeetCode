// Last updated: 7/9/2026, 10:22:33 PM
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int start = -1;
        for(int i= s.size()-1 ; i>=0 ; i--)
        {
            if(s[i] == ' ' && i == s.size()-1 || s[i] == ' ' && s[i+1] == ' ') continue;
            if(s[i]!=' ' && start == -1) start = i;
            if(s[i] ==' ' && start!=-1)
            {
                ans+=s.substr(i,start-i+1);
                start = -1;
            }
        }
        if(start!=-1)
        {
            ans+=" ";
            ans+=s.substr(0,start+1);
        }
        return ans.substr(1,ans.size()-1);
    }
};