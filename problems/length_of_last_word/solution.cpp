class Solution {
public:
    int lengthOfLastWord(string s) {
        int curr = 0;
        for(int i = 0 ; i < s.size();i++)
        {
            if(s[i] == ' ') continue;
            if(s[i] == '\n' || s[i] == '\0') break;
            if(i == 0 || s[i] !=' '&&s[i-1] == ' ')
            {
                curr =1;
            }
            else
            {
                curr++;
            }
        }
        return curr;
    }
};