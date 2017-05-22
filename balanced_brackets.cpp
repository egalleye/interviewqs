#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
    unordered_map<char, int> brackets_dict;
    unordered_map<char, int>::iterator place;
    stack<char> brack_stack;
    char match;

    brackets_dict.insert(make_pair('[', 0));
    brackets_dict.insert(make_pair(']', 0));
    brackets_dict.insert(make_pair('(', 0));
    brackets_dict.insert(make_pair(')', 0));
    brackets_dict.insert(make_pair('{', 0));
    brackets_dict.insert(make_pair('}', 0));
    for (auto it : expression) {
        cout << it << "\n";
        place = brackets_dict.find(it);
        if (place != brackets_dict.end()) {
            cout << " brackets found\n";
            if ((it == '[') || (it == '(') || (it == '{')) {
                cout << "pushing " << it << "\n";
                brack_stack.push(it);
            } else if ((it == ']') || (it == ')') || (it == '}')) {
                if (brack_stack.empty() ) return false;
                match = brack_stack.top();
                cout << "match = " << match << " it = " << it << "\n";
                if (it == ']') { 
                    if (match != '[') return false;
                } else if (it == ')') { 
                    if (match != '(') return false;
                } else if (it == '}') { 
                    if (match != '{') return false;
                } else {
                    cout << "'nother place I houldn't be\n";
                }

                brack_stack.pop();
            } else {
                cout << "Shouldn't be here\n";
            }
        }
    }
    if (!brack_stack.empty()) return false;
    return true;
}

int main(){
    int t;
    string expression;
    expression = "b[([l{a]})]h";
    
    bool answer = is_balanced(expression);
    if(answer)
        cout << "YES\n";
    else cout << "NO\n";
    /*
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    */
    return 0;
}
