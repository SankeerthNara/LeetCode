class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l<=r)
        {
            int mid =(l+r)/2;
            if(target == nums[mid]) return mid;
            if(nums[l]<=nums[mid])
            {
                //left sorted
                if(target > nums[mid] )
                {
                    //right shift
                    l = mid+1;
                }
                else if (target >= nums[l])
                {
                    //left shift
                    r= mid-1;
                }
                else
                {
                    //right shift
                    l = mid+1;
                }
            }
            else
            {
                //right sorted
                if(target<nums[mid])
                {
                    r=mid-1;
                }
                else if(target <= nums[r])
                {
                    l = mid+1;
                }
                else
                {
                    r= mid-1;
                }
            }
        }
        return -1;
    }
};