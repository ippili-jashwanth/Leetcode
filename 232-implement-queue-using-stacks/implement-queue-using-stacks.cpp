class MyQueue {
    stack<int> q;  // Input stack
    stack<int> e;  // Output stack

    void transfer() {
        if (e.empty()) {
            while (!q.empty()) {
                e.push(q.top());
                q.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        q.push(x);
    }

    int pop() {
        transfer();

        int k = e.top();
        e.pop();

        return k;
    }

    int peek() {
        transfer();
        return e.top();
    }

    bool empty() {
        return q.empty() && e.empty();
    }
};