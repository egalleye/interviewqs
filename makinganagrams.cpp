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

int number_needed(string a, string b) {
    int iter;
    int size;
    int maxsize;
    int distance = 0;
    int localdist = 0;
    std::unordered_map<char, int>::iterator place;
    std::unordered_map<char, int> ahashtab;
    std::unordered_map<char, int> bhashtab;

    for (iter = 0; iter < a.size(); iter++) {
        place = ahashtab.find(a[iter]);
        if (place == ahashtab.end() ) {
            ahashtab.insert(std::make_pair(a[iter], 1));
        } else {
            ahashtab[a[iter]]++;
        }
    }

    for (iter = 0; iter < b.size(); iter++) {
        place = bhashtab.find(b[iter]);
        if (place == bhashtab.end() ) {
            bhashtab.insert(std::make_pair(b[iter], 1));
        } else {
            bhashtab[b[iter]]++;
        }
    }

    cout << "aHASH\n";
    for (auto it : ahashtab) {
        place = bhashtab.find(it.first);
        cout << "letter = " << it.first << " a = " << it.second << " b = " << bhashtab[it.first] << "\n";
        if (place == bhashtab.end() ) {
            distance += it.second;
        } else {
            localdist = it.second - bhashtab[it.first];
            distance += abs(localdist);
        } 
        cout << "dist = " << distance << "\n";
    }
    cout << "BHASH\n";
    for (auto it : bhashtab) {
        place = ahashtab.find(it.first);
        cout << "letter = " << it.first << " a = " << ahashtab[it.first] << " b = " << it.second << "\n";
        if (place == ahashtab.end() ) {
            distance += it.second;
        } else {
            if ( ahashtab[it.first] == 0) {
                distance += it.second;
            }
        } 
        cout << "dist = " << distance << "\n";
    }
    
    return distance;  
}

int main(){
    string a;
    a = "zzzztaggolbattys";
    string b;
    b = "yybagoltattys";
    cout << number_needed(a, b) << endl;
    return 0;
}
