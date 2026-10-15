class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size()%2!=0)return false;
        for(int i =0 ; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') 
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                    return false;
              char top = st.top();
                st.pop();
                if(top!='(' && s[i]==')') return  false;
                if(top!='{' && s[i]=='}') return  false;
                if(top!='[' && s[i]==']') return  false;
            }
        }
        // if(st.size() > s.size()/2) return false;
        
        return st.empty();
    }
};