// Last updated: 7/9/2026, 10:26:13 PM
class Solution {
public:
    int myAtoi(string s) {
        int sign = 0;
        long long ans = 0;
        int start = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == ' ') 
            {
                if(start == 0)
                continue;
                else break;
            }
            if(s[i] == '-')
            {   
                if(start == 0)
                {sign = 1;start = 1;continue;}
                else break;
            }
            if(s[i] == '+')
            {
                if(start == 0)
                {start=1;continue;}
                else break;
            }
            long long k = s[i]-'0';
            if(k<0 || k>9) break;
            else{start =1 ;ans = ans*10 + k;}
            if(ans > INT_MAX)
            { 
                if(sign == 0)
                return INT_MAX;
                else return INT_MIN;
            }
        }
        if(sign == 1)
        {
            ans = -ans;
        }
        
        return (int) ans;
        
    }
};