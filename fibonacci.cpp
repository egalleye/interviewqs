#include <iostream>

using namespace std;

int fibonacci(int n) {
    int fib;
    if (n == 0) {
        fib = 0;
    } else if (n == 1) {
        fib = 1;
    } else {
        fib = fibonacci(n-1) + fibonacci(n-2);
    }
    return fib;

}
int main() {
    int n;
    n = 0;
    cout << fibonacci(n) << "\n";
    n = 1;
    cout << fibonacci(n) << "\n";
    n = 2;
    cout << fibonacci(n) << "\n";
    n = 3;
    cout << fibonacci(n) << "\n";
    n = 4;
    cout << fibonacci(n) << "\n";
    n = 5;
    cout << fibonacci(n) << "\n";
    n = 6;
    cout << fibonacci(n) << "\n";
    return 0;
}
