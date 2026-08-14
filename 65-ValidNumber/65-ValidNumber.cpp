// Last updated: 8/14/2026, 11:41:28 PM
1class Solution {
2public:
3    bool isNumber(string s) {
4        if(s[s.size()-1] == '+' || s[s.size()-1] == '-' || s[s.size()-1] == 'e' || s[s.size()-1] == 'E') return false;
5        int deci  = 0;
6        int ex = 0;
7        int num = 0;
8        for(int i = 0 ; i < s.size() ; i++)
9        {
10            if((s[i]-'0' < 0 || s[i]-'0' > 9) && s[i]!='e' &&s[i]!='E' &&s[i]!='.' && s[i]!='+' && s[i]!='-')return false;
11            if(s[i] == 'e' || s[i] == 'E')
12            {
13                if(ex) return false;
14                if(num){ex = 1; continue;}
15                else return false;
16            }
17            if(i == 0 && (s[i] == '+' || s[i] == '-')) continue;
18            if(!ex &&(s[i] == '+' || s[i] == '-')) return false;
19            if(!ex && !deci && s[i] == '.') {deci = 1;continue;}
20            if(s[i] =='.' && (ex || deci)) return false;
21            if(s[i]-'0' >= 0 && s[i]-'0' <= 9) {num = 1 ; continue;}
22            if((s[i] == '+' || s[i] == '-') && ex)
23            {
24                if(s[i-1] == 'e' || s[i-1] == 'E') 
25                continue;
26                else return false;
27            }
28            
29        }
30        if((deci || ex) && !num) return false;
31        return true;
32    }
33};