// Last updated: 7/9/2026, 10:24:37 PM
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> ans;
        int n = path.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(path[i] == '/' || i<path.size()-1 && path[i] == '.' && path[i+1]=='/') continue;
            if(i == n-2 && path[i] == '.' && path[i+1] == '.' && ans.size()) {ans.pop_back();break;}
            if(i<path.size()-2 && path[i] == '.' && path[i+1] == '.')
            {
                if(path[i+2]=='/')
                {
                   if(ans.size())ans.pop_back();
                   i++;
                   continue;
                } 
                else
                {
                    string temp ="..";
                    int k = i+2;
                    while(k<n && path[k] !='/')
                    {
                        temp+=path[k];
                        k++;
                    }
                    i =k;
                    ans.push_back(temp);
                    continue;
                }
            }
            if(path[i]!='.' && path[i]!='/' || i<n-1 && path[i] == '.' && path[i+1]!='/' && path[i+1]!='.')
            {
                string temp = "";
                int k = i;
                while(k<n && path[k]!='/')
                {
                    temp+=path[k];
                    k+=1;
                }
                ans.push_back(temp);
                i = k;
                continue;
            }
        }
        string a = "";
        for(string o : ans)
        {
            a+="/";
            a+=o;
        }
        if(ans.size()) return a;
        else return "/";
    }
};