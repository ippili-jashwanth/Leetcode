class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>s;
        for(int i = 0 ; i <t.size(); i++)
        {
            if(t[i]!="+" && t[i]!="*" && t[i]!="-" && t[i]!="/")
            {
                int num = stoi(t[i]);
                s.push(num);
            }
            else if(t[i]=="+")
            {
                int num1 = s.top();
                s.pop();
                int num2 = s.top()+num1;
                s.pop();
                s.push(num2);
            }
             else if(t[i]=="-")
            {
                  
                  int num1 = s.top();
                s.pop();
                int num2 = s.top()-num1;
                s.pop();
                s.push(num2);
            }
             else if(t[i]=="*")
            {
                int num1 = s.top();
                s.pop();
                int num2 = s.top()*num1;
                s.pop();
                s.push(num2);
            }
            else
            {  
                int num1 = s.top();
                s.pop();
                if(num1!=0 && s.top()!=0)
                {
                int num2 = s.top()/num1;
                s.pop();
                s.push(num2);
                }
            }
        }
        return s.top();
    }
};