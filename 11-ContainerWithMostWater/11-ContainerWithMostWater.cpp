// Last updated: 7/9/2026, 10:36:59 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans=-1;
        for(int i=1;i<n;i++)
        {
            for(int j = 0;j<i;j++)
            {
                if(height[j]>=height[i])
                {
                    ans = max(ans,height[i]*(i-j));
                    break;
                }
            }
        }
        for(int i = n-2 ; i>=0 ; i--)
        {
            for(int j =n-1 ; j> i ; j--)
            {
                if(height[j]>=height[i])
                {
                    ans = max(ans,height[i]*(j-i));
                    break;
                }
            }
        }
        return ans;
    }
};