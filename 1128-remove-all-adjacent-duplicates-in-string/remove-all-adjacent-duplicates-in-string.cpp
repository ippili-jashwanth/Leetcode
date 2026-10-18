class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>st;
        for(int i =0; i < s.size(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                char a = st.top();
                if(a==s[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        string f = "";
         while(!st.empty())
        {  
            
            f.insert(0,1,st.top());
            st.pop();
        }
        return f;
    }
};