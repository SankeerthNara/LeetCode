class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxi = nums[0];
        int k = 1;
        int n = nums.size();
        while(k<=min(maxi,n-1))
        {
            int cur = k+nums[k];
            maxi = max(cur,maxi);
            k++;
        }
        if(k == n) return true;
        else return false;
    }
};