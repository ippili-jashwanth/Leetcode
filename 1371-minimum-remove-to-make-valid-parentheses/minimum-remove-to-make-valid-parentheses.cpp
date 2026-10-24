class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int>v;
        vector<int>e;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i]=='(') v.push_back(i) ;
            else if(s[i]==')' ) 
            {
                if(v.size()>0) v.erase(remove(v.begin(),v.end(), v[v.size()-1] ),v.end());
                else if(v.size()==0)
                {
                 s[i]=' ';
                }

                
  
            }

        }
       
        for(int i:v)
        {    
            s[i]=' ';
        }
        string k ;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i]!=' ') k+=s[i];
        }
        return k;
    }
};