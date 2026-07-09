// Last updated: 7/9/2026, 10:33:54 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev = {1};
        for(int i = 0 ; i < rowIndex ; i++)
        {
           vector<int> curr;
           curr.push_back(1); 
            for(int j = 0 ; j < prev.size()-1 ; j++)
            {
                curr.push_back(prev[j]+prev[j+1]);
            }
            curr.push_back(1);
            prev = curr;
        }
        return prev;
    }
};