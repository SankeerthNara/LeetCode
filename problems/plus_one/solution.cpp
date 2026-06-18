class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carry = 1;
        int n = digits.size();
        int i = 0;
        while(i<n)
        {
            digits[i] = digits[i]+carry;
            carry = digits[i]/10;
            digits[i] = digits[i]%10;
            i++;
        } 
        if(carry) digits.push_back(carry);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};