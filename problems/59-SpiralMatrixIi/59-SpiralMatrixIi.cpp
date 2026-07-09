// Last updated: 7/9/2026, 10:24:50 PM
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int k = 1;
        int top = 0;
        int left = 0;
        int bottom = n-1;
        int right = n-1;
        while(left<=right && top <= bottom)
        {
            for(int i = left ; i<=right ; i++)
            {
                ans[top][i] = k++;
            }
            top++;
            for(int i = top ; i<= bottom ; i++)
            {
                ans[i][right] = k++;
            }
            right--;
            for(int i = right ; i>=left ; i -- )
            {
                ans[bottom][i] = k++;
            }
            bottom--;
            for(int i = bottom ; i>=top ; i--)
            {
                ans[i][left] = k++;
            }
            left ++;
        }
        return ans;
    }
};