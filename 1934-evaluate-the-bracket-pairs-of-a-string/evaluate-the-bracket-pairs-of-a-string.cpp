class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(int i = 0; i < knowledge.size(); i++)
        {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        for(int i = 0 ; i < s.size(); i++)
        {
            string sub = "";
            if(s[i]=='(')
            {
                int ind = i ;
            
               int k= ind+1;
            while(s[k]!=')')
            {
                sub+=s[k];
                k++;
            }
            s.erase(ind, k-ind+1);
            string value="?";
            if(mp.find(sub)!=mp.end())
            {
               value = mp[sub];
            }
              s.insert(ind, value); 
            i= ind + value.size()-1;
            }

        }
        mp.clear();
        return s;
    }
};