// Last updated: 7/20/2026, 7:48:14 PM
1class Solution {
2public:
3    vector<vector<int>> ans;
4    vector<int> curr;
5    void vatta(int k , int n , int pos , int fil,int sum)
6    {
7        if(sum > n) return;
8        if(fil == k)
9        {
10            if(sum == n) ans.push_back(curr);
11            return;
12        }
13        if(pos > 9) return;
14        curr.push_back(pos);
15        vatta(k,n,pos+1,fil+1,sum+pos);
16        curr.pop_back();
17        vatta(k,n,pos+1,fil,sum);
18        return;
19    }
20    vector<vector<int>> combinationSum3(int k, int n) {
21        vatta(k,n,1,0,0);
22        return ans;
23    }
24};