#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num_tests;
    string s;
    int it, evenit, oddit;
    

    //cin >> num_tests;
    //cin.ignore(256, '\n');
    num_tests = 2;
    for (it = 0; it < num_tests; it++) {
        getline(cin, s);
        for (evenit = 0; evenit < s.size(); evenit += 2) {
            cout << s[evenit];
        }
        cout << " ";
        for (oddit = 1; oddit < s.size(); oddit += 2) {
            cout << s[oddit];
        }
        cout << endl;
    }
    return 0;
}

