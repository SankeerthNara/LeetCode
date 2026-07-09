// Last updated: 7/9/2026, 10:37:08 PM
class Solution {
public:
    string longestPalindrome(string s) {
        int ans = 1;
        int ind1 = 0;
        int ind2 = 0;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            for(int j = s.size()-1 ; j >=0 ; j--)
            {
                if(i>=j) continue;
                //palindrome check
                int a = i;
                int b = j;
                int con = 0;
                while(a<b)
                {
                    if(s[a]!=s[b])
                    {
                        con = 1;
                        break;
                    }
                    a++;
                    b--;
                }
                if(con == 0)
                {
                    if(j-i+1>ans)
                    {
                        ans = j-i+1;
                        ind1 = i;
                        ind2 = j;
                    }
                }
            }
        }
        return s.substr(ind1,ans);
    }
};