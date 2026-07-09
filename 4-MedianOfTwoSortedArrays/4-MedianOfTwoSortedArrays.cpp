// Last updated: 7/9/2026, 10:37:10 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
            int first=0;
            int second = 0;
            int k = (n+m)/2-1;
            int count = 0;
            int i = 0;
            int j = 0;
            while(i<n&&j<m)
            {
                if(nums1[i]<=nums2[j])
                {
                    if(count == k)
                    {
                        if((n+m)%2==0) first=nums1[i];
                    }
                    if(count == k+1)
                    {
                        second=nums1[i];
                        count++;
                        break;
                    }
                    i++;
                    count++;
                }
                else
                {
                    if(count == k)
                    {
                        if((n+m)%2==0) first=nums2[j];
                    }
                    if(count == k+1)
                    {
                        second=nums2[j];
                        count++;
                        break;
                    }
                    j++;
                    count++;
                }
            }
                while(i<n)
                {
                    if(count >k+1) break;
                    if(count == k)
                    {
                        if((n+m)%2==0) first=nums1[i];
                    }
                    if(count == k+1)
                    {
                        second=nums1[i];
                        count++;
                        break;
                    }
                    i++;
                    count++;
                }
                while(j<m)
                {
                    if(count >k+1) break;
                    if(count == k)
                    {
                        if((n+m)%2==0) first=nums2[j];
                    }
                    if(count == k+1)
                    {
                        second=nums2[j];
                        count++;
                        break;
                    }
                    j++;
                    count++;
                }
                
            if((n+m)%2==0)
            {
                return (first+second)/2.0;
            }
            else return second;

        }
    
};