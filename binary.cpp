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

void print_binary (int num) {
    int remainder;
    string s;
    
  
    if (num <= 1) {
        cout << num;
        return;
    }
    remainder = num % 2;
    print_binary(num/2);
    cout << remainder;
}

int main(){
    int n;
    int it;
    int curr_run, run;
    int tmp;
    int rem;
    while(1) {
        cin >> n;
        print_binary(n);
        cout << endl;
        tmp = n;
        run = 0;
        curr_run = 0;
        while (1) {
            rem = tmp % 2;
            cout << rem;
            tmp = tmp/2;
            if (rem == 1) {
                curr_run++;
                if (curr_run > run) {
                    run = curr_run;
                }
            } else {
                curr_run = 0;
            }
            if (tmp <= 1) break;
        } 
        if (tmp == 1) {
            curr_run++;
            if (curr_run > run) {
                run = curr_run;
            }
        }
        cout << run << endl;
    }
    
    return 0;
}
