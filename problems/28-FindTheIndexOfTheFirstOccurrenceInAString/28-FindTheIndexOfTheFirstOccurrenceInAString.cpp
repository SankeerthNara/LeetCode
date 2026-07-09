// Last updated: 7/9/2026, 10:25:43 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int lh = haystack.size();
        int ln = needle.size();
        for(int i = 0 ; i < lh ; i++)
        {
            if(haystack[i] == needle[0])
            {
                int ret = 0;
                int k =1;
                while(k < ln)
                {
                    if(haystack[i+k]!=needle[k])
                    {
                        ret = 1;
                        break;
                    }
                    k++;
                }
                if(ret == 0)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};