// Last updated: 7/9/2026, 10:26:07 PM
class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        for(int i =0;i<num/1000;i++)
        {
            ans+='M';
        }
        num=num%1000;
        if(num/100 == 9)
        {
            ans+='C';
            ans+='M';
            num = num%100;
        }
        else if(num/100 == 4)
        {
            ans+='C';
            ans+='D';
            num = num%100;
        }
        else
        {
        for(int i =0;i<num/500;i++)
        {
            ans+='D';
        }
        num=num%500;
        for(int i =0;i<num/100;i++)
        {
            ans+='C';
        }
        num=num%100;
        }
        if(num/10 == 9)
        {
            ans+='X';
            ans+='C';
            num = num%10;
        }
        else if(num/10 == 4)
        {
            ans+='X';
            ans+='L';
            num = num%10;
        }
        else
        {
        for(int i =0;i<num/50;i++)
        {
            ans+='L';
        }
        num=num%50;
        for(int i =0;i<num/10;i++)
        {
            ans+='X';
        }
        num=num%10;
        }
        if(num == 9)
        {
            ans += 'I';
            ans+= 'X';
            num = num%1;
        }
        else if (num == 4)
        {
            ans += 'I';
            ans+= 'V';
            num = num%1;
        }
        else
        {

        
        for(int i =0;i<num/5;i++)
        {
            ans+='V';
        }
        num=num%5;
        for(int i =0;i<num/1;i++)
        {
            ans+='I';
        }
        num=num%1;
        }
        return ans;  
    }
};