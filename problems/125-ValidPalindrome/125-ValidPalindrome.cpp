// Last updated: 7/9/2026, 10:23:07 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i<j)
        {
            int a = -1;
            int b = -1;
            if((int)s[i]>47 && (int)s[i]<58 || (int)s[i]>64&&(int)s[i]<91)
            {
                a = (int)s[i];
            }
            if((int)s[j]>47 && (int)s[j]<58|| (int)s[j]>64&&(int)s[j]<91 )
            {
                b = (int)s[j];
            }
            if((int)s[i]>96 && (int)s[i]<123)
            {
                a = (int)s[i] -32;
            }
            if((int)s[j]>96 && (int)s[j]<123)
            {
                b = (int)s[j] -32;
            }
            if(a == -1)
            {
                i++;
                continue;
            }
            if(b == -1)
            {
                j--;
                continue;
            }
            if(a-b) return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
    
};