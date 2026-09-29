class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string , vector<string>  > mp;
        for(string i : strs)
        {   
            string j = i;
            sort(j.begin(),j.end());
            
            mp[j].push_back(i);
            
            
            
        }
        vector <vector<string>>v;
        for(auto i : mp)
            {
                v.push_back(i.second);
            }
            return v;
    }
};