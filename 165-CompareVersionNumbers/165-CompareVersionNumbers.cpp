// Last updated: 7/9/2026, 10:33:06 PM
class Solution {
public:
    int compareVersion(string version1, string version2) {
       int i = 0;
       int j = 0;
       int n = version1.size();
       int m = version2.size();
       while(i<n && j<m)
       {
            int s1= i;
            while(i!=n && version1[i]!='.')
            {
                i++;
            }
            int a = stoi(version1.substr(s1,i-s1));
            s1= j;
            while(j!=m && version2[j]!='.')
            {
                j++;
            }
            int b = stoi(version2.substr(s1,j-s1));
            if(a > b) return 1;
            else if(a < b) return -1;
            else
            {
                i++;
                j++;
            }
       }   
       if(i > n && j > m)
       {
        return 0;
       }
       else if(i > n)
       {
        while(j<m)
        {
            if(version2[j] =='.')
            {
                j++;
            }
            else if(version2[j] !='0') return -1;
            else j++;
        }
        return 0;
       }
       else
       {
            while(i<n)
        {
            if(version1[i] =='.')
            {
                i++;
            }
            else if(version1[i] !='0') return 1;
            else i++;
        }
        return 0;
       }
       return 0;
    }
};