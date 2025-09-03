class MinStack {
private:
    stack<int> nums;
    stack<int> mins;

public:
    MinStack() {
           
    }
    
    void push(int val) {
        nums.push(val);

        if(mins.empty()) {
            mins.push(val);
        }
        else{
            if(val < mins.top()) {
                mins.push(val);
            }
            else {
                mins.push(mins.top());
            }
        }
    }
    
    void pop() {
        if(!nums.empty()){
            nums.pop();
            mins.pop();
        }        
    }
    
    int top() {
        return nums.top();        
    }
    
    int getMin() {
        return mins.top();
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
