// Last updated: 7/9/2026, 10:25:54 PM
class Solution {
public:
    bool isValid(string s) {
     int len = s.size();
     stack <int> st;
     for(int  i = 0 ; i < len ; i++ )
     {
        if( s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            if(st.top() == '(' && s[i] == ')' || st.top() == '[' && s[i] == ']' || st.top() == '{' && s[i] == '}')
            {
                st.pop();
                
            }
            else
            {
                return false;
            }
        }
     }  
     if(st.empty()) 
     return true;
     else return false;
    }
};