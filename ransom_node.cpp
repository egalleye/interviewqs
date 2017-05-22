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

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string, int>::iterator place;
    unordered_map<string, int> magazine_dict;
    unordered_map<string, int> ransom_dict;

    for (auto it : magazine) {
        cout << "it = " << it << "\n";
        place = magazine_dict.find(it);
        if (place == magazine_dict.end()) {
            magazine_dict.insert(make_pair(it, 1));
        } else {
            magazine_dict[it]++;
        }
    } 

    for (auto it : ransom) {
        cout << "it = " << it << "\n";
        place = ransom_dict.find(it);
        if (place == ransom_dict.end()) {
            ransom_dict.insert(make_pair(it, 1));
        } else {
            ransom_dict[it]++;
        }
    } 

    for (auto it : ransom_dict) {
        cout << "key = " << it.first << " val = " << it.second << "\n";
        place = magazine_dict.find(it.first);
        if (place == magazine_dict.end() ) { 
            return false;
        } else {
            if (magazine_dict[it.first] < it.second) {
                return false;
            }
        }
    }

    for (auto it : magazine_dict) {
        cout << "key = " << it.first << " val = " << it.second << "\n";
    }
    
    return true;
}

int main(){
    int m;
    int n;
    vector<string> magazine(m);
    vector<string> ransom(n);
    n = 6;
    m = 4;
    
    //cin >> m >> n;
    //for(int magazine_i = 0;magazine_i < m;magazine_i++){
    //   cin >> magazine[magazine_i];
    //}
    //for(int ransom_i = 0;ransom_i < n;ransom_i++){
    //   cin >> ransom[ransom_i];
    //}
    magazine = {"give", "give", "give", "me", "one", "grand", "today", "night"};
    ransom = {"give", "give", "give", "give", "me", "one", "grand", "today"};

    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
