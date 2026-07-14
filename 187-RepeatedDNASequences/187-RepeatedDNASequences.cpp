// Last updated: 7/14/2026, 12:25:07 PM
1class Solution {
2public:
3    vector<string> findRepeatedDnaSequences(string s) {
4        if(s.size() < 10) return {};
5        unordered_map<string,int> mp;
6        vector<string> ans;
7        for(int i = 0 ; i < s.size()-9;i++)
8        {
9            string k = s.substr(i,10);
10            if(mp.count(k)) mp[k]++;
11            else mp[k] = 1;
12        }
13        for(int i = 0 ; i < s.size()-9 ; i++)
14        {
15            string k = s.substr(i , 10);
16            if(mp[k] > 1)
17            {
18                ans.push_back(k);
19                mp[k] = 0;
20            }
21        }
22        return ans;
23    }
24};