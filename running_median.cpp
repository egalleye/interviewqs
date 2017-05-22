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
#include <iomanip>
#include <algorithm>
#include <unordered_map>

using namespace std;

double find_median(vector<int> a, int n, int a_i) {
    double median; 
    int iter;
    int idx_middle;
    int mid_low;
    int mid_high;
    int asorted_size;
    median = 1.1;
    vector<int> asorted;
    a_i++;
    // collect all non zero values in @asorted 
    for (iter = 0; iter < a_i; iter++) {
        asorted.push_back(a[iter]);
    }
    // sort a
    sort(asorted.begin(), asorted.end());

    asorted_size = asorted.size(); 
    if (asorted_size % 2) {
        // odd
        if (asorted_size == 1) {
            median = asorted[0];
        } else {
            idx_middle = asorted_size/2;
            median = asorted[idx_middle];
        }
    } else {
        // even
        if (asorted_size == 2) {
            median = (double) (asorted[0] + asorted[1])/2;
        } else {
            idx_middle = asorted_size/2;
            median = (double) (asorted[idx_middle-1] + asorted[idx_middle]) / 2;
        }
    }
    
    return median;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    std::cout << std::setprecision(1) << std::fixed;
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       cout << find_median(a, n, a_i) << "\n";
    }
    return 0;
}
