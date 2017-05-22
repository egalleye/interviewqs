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


int main(){
    int n, rev_it;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    cout << "array = ";
    for (auto it : arr) cout << it;
    cout << endl;
    cout << "rev array = ";
    for (rev_it = n-1; rev_it >= 0; rev_it--) {
        cout << arr[rev_it] << ' ';
    }
    cout << endl;
    return 0;
}

