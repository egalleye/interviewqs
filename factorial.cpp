#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
    int fact = n;
    cout << "n = " << n << "\n";
    if (n == 1) {
        fact = 1;
    } else {
        fact *= factorial(n-1);
    }
    cout << "fact = " << fact << endl;
    return fact;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

