// Last updated: 7/22/2026, 10:51:27 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        if(target < matrix[0][0] || target > matrix[n-1][m-1]) return false;
7        for(int i = 0 ; i < n ; i++)
8        {
9            if(target < matrix[i][0]) return false;
10            if(target <= matrix[i][m-1])
11            {
12                int l = 0;
13                int r = m-1;
14                while(l <= r)
15                {
16                    int mid = l+(r-l)/2;
17                    if(matrix[i][mid] == target) return true;
18                    if(matrix[i][mid] < target) l = mid+1;
19                    else r = mid-1;
20                } 
21            }
22        } 
23        return false;  
24    }
25};