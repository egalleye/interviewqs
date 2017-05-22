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

priority_queue<int, vector<int>, less<int>> minheap;
priority_queue<int, vector<int>, greater<int>> maxheap;
int minheap_size;
int maxheap_size;
double curr_median;

double find_median(vector<int> a, int n, int a_i) {
    double median; 
    int tmp;
    int iter;
    priority_queue<int, vector<int>, less<int>> tmpminheap;
    priority_queue<int, vector<int>, greater<int>> tmpmaxheap;
    if (a_i == 0) {
        cout << "Adding to right heap\n";
        median = a[a_i];
        maxheap.push(a[a_i]);
        maxheap_size = 1;
    } else if (a_i == 1) {
        cout << "Adding to left heap\n";
        if (a[a_i] > maxheap.top()) {
            minheap.push(maxheap.top());
            maxheap.pop();
            maxheap.push(a[a_i]);
        } else {
            minheap.push(a[a_i]);
        }
        minheap_size = 1;
        median = (double) (minheap.top() + maxheap.top()) / 2;
    } else {
        if (a[a_i] > curr_median) {
            //if (maxheap.size() > minheap.size()) {
            if (maxheap_size > minheap_size) {
                tmp = maxheap.top();
                minheap.push(tmp);
                maxheap.pop();
                minheap_size++;
                maxheap_size--;
            }
            maxheap.push(a[a_i]);
            maxheap_size++;
   
        } else {
            //if (maxheap.size() < minheap.size()) {
            if (maxheap_size < minheap_size) {
                tmp = minheap.top();
                maxheap.push(tmp);
                minheap.pop();
                minheap_size--;
                maxheap_size++;
            }
            minheap.push(a[a_i]);
            minheap_size++;
        }

        if (maxheap.size() > minheap.size() ) {
            median = maxheap.top();
        } else if (minheap.size() > maxheap.size()) {
            median = minheap.top();
        } else {
            // equal
            median = (double) (minheap.top() + maxheap.top())/2;
        }
        cout << "median = " << median << "\n";
        
    }
    cout << "minheap = ";
    tmpminheap = minheap;
    while (!tmpminheap.empty()) {
        cout << tmpminheap.top()  << ", ";
        tmpminheap.pop();
    }
    cout << endl;
    cout << "maxheap = ";
    tmpmaxheap = maxheap;
    while (!tmpmaxheap.empty()) {
        cout << tmpmaxheap.top() << ", ";
        tmpmaxheap.pop();
    }
    cout << endl;
    curr_median = median;
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
