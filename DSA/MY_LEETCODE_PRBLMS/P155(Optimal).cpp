class MinStack {
public:
    MinStack() {}
    stack<long long>stk;
    long long int mini=INT_MAX;

    void push(int val) {
        if(stk.empty()){
            mini=val;
            stk.push(val);
        }
        else{
            if(val>=mini){
                stk.push(val);
            }
            else{
                stk.push(2LL*val-mini);
                mini=val;
            }
        }
    }

    void pop() {
        if(stk.empty()){
            return;
        }
        long long int x=stk.top();
        stk.pop();
        if(x<mini){
            mini=2LL * mini-x;
        }
    }

    int top() {
        if(stk.empty()){
            return -1;
        }
        else{
            if(stk.top()<mini){
                return mini;
            }
            else{
                return stk.top();
            }
        }
        return 0;
    }

    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
