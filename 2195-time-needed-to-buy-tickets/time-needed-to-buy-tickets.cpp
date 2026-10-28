class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        queue<int>q;
        for(int i = 0; i < t.size(); i++)
        {   
           q.push(i) ;
        }
        int count = 0 ;
        while(!q.empty())
        {
           int p = q.front();
           t[p]--;
           count++;
           q.pop();
           if(t[p]==0)
           {
              if(p==k) return count;
            
           }
           else q.push(p);

        }
        return count;
        
        


    }
};