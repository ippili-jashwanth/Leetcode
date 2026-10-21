class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>p;
      

      int j=0;
      int i = 0;
      while(i<pushed.size() || !p.empty())
      {
        
        if (!p.empty() && j < popped.size() && p.top() == popped[j])
        {
            p.pop();
            j++;
           
        }
        else if(i<pushed.size())
        {
           p.push(pushed[i]);
           i++;
        }
        else
        {
            break;
        }
       
      }
     return j==popped.size();
     

  }
};