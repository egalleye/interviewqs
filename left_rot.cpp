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

vector<int> array_left_rotation(vector<int> a, int n, int k) {
     int itor;
     int new_idx;
     int left_rot = (n - k); 
     vector<int> b(n);
     for(itor = 0; itor < n; itor++) {
         new_idx = (itor + k) % n;
         //cout << "new idx = " << new_idx << "\n";
         b[itor] = a[new_idx];
     }    
     return b;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    //n = 8;
    //k = 2;
    vector<int> a(n);
    //cout << "list is " << n << " long and rotated by " << k << "\n";
    for(int a_i = 0;a_i < n;a_i++){
        //a[a_i] = a_i + 1;
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
