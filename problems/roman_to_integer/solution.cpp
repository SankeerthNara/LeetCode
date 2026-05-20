class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int i =0;
        int ans =0;
        while( i < n)
        {
            if(s[i]=='M')
            {
                ans+=1000;
                i++;
                continue;
            }
            if(s[i]=='C'&&i<n-1)
            {
                if(s[i+1]=='D')
                {
                    ans+=400;
                    i+=2;
                    continue;
                }
                else if(s[i+1] == 'M')
                {
                    ans+=900;
                    i+=2;
                    continue;
                }
            }
            if(s[i] == 'D')
            {
                ans += 500;
                i++;
                continue;
            }
            if(s[i] == 'C')
            {
                ans+=100;
                i++;
                continue;
            }
            if(s[i]=='X'&&i<n-1)
            {
                if(s[i+1]=='L')
                {
                    ans+=40;
                    i+=2;
                    continue;
                }
                else if(s[i+1] == 'C')
                {
                    ans+=90;
                    i+=2;
                    continue;
                }
            }
            if(s[i] == 'L')
            {
                ans += 50;
                i++;
                continue;
            }
            if(s[i] == 'X')
            {
                ans+=10;
                i++;
                continue;
            }
            if(s[i]=='I'&&i<n-1)
            {
                if(s[i+1]=='V')
                {
                    ans+=4;
                    i+=2;
                    continue;
                }
                else if(s[i+1] == 'X')
                {
                    ans+=9;
                    i+=2;
                    continue;
                }
            }
            if(s[i] == 'V')
            {
                ans += 5;
                i++;
                continue;
            }
            if(s[i] == 'I')
            {
                ans+=1;
                i++;
                continue;
            }
        }
        return ans;
    }
};