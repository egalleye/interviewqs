#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;


int main() {
    int n, it;
    string line, name, number;
    map<string, string> phonebook;
    cin >> n;
    cin.ignore(256, '\n');
    for (it = 0; it < n; it++) {
        cin >> name;
        cin >> number;
        phonebook.emplace (name, number);
    }
    for (it = 0; it < n; it++) {
        cin >> name;
        cout << "Checking if " << name << " is in the phonebook" << endl;
        map<string,string>::iterator got = phonebook.find(name);
        if (got == phonebook.end()) {
            cout << "Not found\n";
        } else {
            cout << got->first << "=" << got->second << endl;
        }
        
    }
   
    return 0;
}
