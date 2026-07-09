// Last updated: 7/9/2026, 10:37:07 PM
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector <string> ans(numRows,"");
        int curow = 0;
        int ord = 0;
        for(int i=0;i<s.size();i++)
        {
            if(curow == numRows && ord == 0)
            {
                curow = numRows -2;
                ord = 1;
            }
            else if (curow == -1 && ord == 1)
            {
                curow = 1;
                ord = 0;
            }
            if(ord == 0)
            {
                ans[curow]+=s[i];
                curow++;
            }
            else
            {
                ans[curow]+=s[i];
                curow--;
            }
        }   
        string q="";
        for(int i=0;i<numRows;i++)
        {
            q+=ans[i];
        }
        return q;
    }
};