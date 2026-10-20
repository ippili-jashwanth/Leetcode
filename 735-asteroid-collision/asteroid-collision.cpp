class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int i =0;
        
        while(i<a.size())
        {
         if(s.empty())
         {
            s.push(a[i]);
            i++;
         }
         else if(s.top()>0 && a[i]<0)
         {  
            if(s.top()== (a[i]*(-1)) )
            {
                s.pop();
                i++;
            }
            else if( s.top() < -a[i] )
            {
              s.pop();
            }
            else
            {
               
                i++;
            }
         }
         else
         {
            s.push(a[i]);
            i++;
         }
        }
        vector<int>st;
        while(!s.empty())
        {
          st.insert(st.begin(),s.top());
          s.pop();
        }
        return st;
    }
};