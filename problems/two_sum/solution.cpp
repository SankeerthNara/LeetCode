class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> se;
        for(int i=0; i < nums.size();i++)
        {
            if(se.find(nums[i])==se.end())
            {
                se[nums[i]]=i;
            }
            else
            {
                if(nums[i]*2==target)
                {
                    vector <int> ans;
                    ans.push_back(se[nums[i]]);
                    ans.push_back(i);
                    return ans;
                }
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(se.find(target-nums[i])!=se.end()&&se[target-nums[i]]!=i)
            {
                vector <int> ans;
                ans.push_back(se[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
        }
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);

        return ans;
    }
};