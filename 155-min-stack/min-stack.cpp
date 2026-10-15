

class MinStack {
private: 
    stack<int>s;
    stack<int>ms;
public:
    MinStack() {
        // stack<int>s;
    }
    
    void push(int value) {
        s.push(value);
        if(ms.empty())
        {
            ms.push(value);
        }
        else
        {
            if( value <= ms.top() )
            {
                // ms.pop();
                ms.push(value);
            }
        }
    }
    
    void pop() {
        if(s.empty()) return ;
        int top = s.top();
        s.pop();
        if(top == ms.top())
        {
            ms.pop();
        }
    }
    
    int top() {
        if(s.empty())return 0;
     return s.top();   
    }
    
    int getMin() {
         return ms.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */