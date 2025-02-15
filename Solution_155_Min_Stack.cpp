#include<vector>
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

class MinStack {
    stack<int> st1;
    stack<int> st2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st1.empty()) {
            st1.push(val);
            st2.push(val);
        }
        else{
            st1.push(val);
            if(val<=st2.top()) st2.push(val);
        }
    }
    
    void pop() {
        if(st1.empty()) cout<<-1;
        else if(st1.top()==st2.top()){
            st1.pop();
            st2.pop();
        }
        else{
            st1.pop();
        }
    }
    
    int top() {
        if(st1.empty()) return -1;
        return st1.top();
    }
    
    int getMin() {
        if(st2.empty()) return -1;
        return st2.top();
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