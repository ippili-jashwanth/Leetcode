class Solution {
public:
    string simplifyPath(string path) {
    stack<string>s;
    int i = 0;
    string str;
    path+='/';
    for(char c : path)
    {
        if(c!='/')
        {
            str+=c;

        }
        else
        {
            if(str=="..")
            {
                if(!s.empty()) s.pop();
            }
            else if(!str.empty() && str!=".")
            {
              s.push(str);
            }

            str="";
        }
    }

   string k="";
    while(!s.empty())
    {
       k.insert(0,s.top());
       k.insert(0,"/");
       s.pop();

    }

return k.empty() ? "/" : k;
    }
};