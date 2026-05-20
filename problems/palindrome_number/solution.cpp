class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s = "";
        while(x)
        {
            s+=x%10;
            x=x/10;
        }
        reverse(s.begin(),s.end());
        int i = 0;
        int j = s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};