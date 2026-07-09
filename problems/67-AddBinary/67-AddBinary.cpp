// Last updated: 7/9/2026, 10:24:42 PM
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans = "";
        int carry = 0;
        int i = 0;
        int j = 0;
        while(i!= a.size() || j!= b.size())
        {
            int temp = carry;
            if(i!=a.size())
            {
                temp+= (a[i++] - '0');
            }
            if(j!=b.size())
            {
                temp+=(b[j++] - '0');
            }
            carry = temp/2;
            temp = temp%2;
            ans+=to_string(temp);
        }
        if(carry) ans+=to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;   
    }
};