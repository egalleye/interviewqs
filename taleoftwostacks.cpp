#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stack_newest_on_top, stack_oldest_on_top;   
        void push(int x) {
            stack_newest_on_top.push(x);
            return;
        }

        void pop() {
            int tmp;
            if (stack_oldest_on_top.empty()) {
                if ( stack_newest_on_top.empty()) {
                    cout << "No elements to pop!\n";
                    return;
                }
                while ( !stack_newest_on_top.empty()) {
                    tmp = stack_newest_on_top.top();
                    stack_oldest_on_top.push(tmp);
                    stack_newest_on_top.pop();
                }

            }
            cout << "popping " << stack_oldest_on_top.top() << "...\n";
            stack_oldest_on_top.pop();
            return;
            
        }

        int front() {
             int tmp = 0;
             if (stack_oldest_on_top.empty()) {
                if ( stack_newest_on_top.empty()) {
                    cout << "No elements on top!\n";
                    return 0;
                }
                while ( !stack_newest_on_top.empty() ) {
                    tmp = stack_newest_on_top.top();
                    stack_oldest_on_top.push(tmp);
                    stack_newest_on_top.pop();
                    
                }

            }
            tmp = stack_oldest_on_top.top();
            cout << "top is " << tmp << "...\n";
                /*
            */
            return tmp;
           
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    
    /*
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    */
    
    q1.pop();
    q1.front();
    q1.push(1);
    q1.push(2);
    q1.front();
    q1.push(3);
    q1.pop();
    q1.pop();
    q1.pop();
    q1.push(4);
    q1.front();
    q1.push(5);
    q1.pop();
    q1.push(6);
    q1.front();
    q1.pop();
    q1.pop();
    q1.pop();
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
