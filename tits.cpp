#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "tits ";
    int secondint;
    double seconddouble;
    string secondstring;
    std::cout << std::setprecision(1) << std::fixed;
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> secondint;
    cin >> seconddouble >> skipws;
    cin.ignore(256, '\n');
    getline(cin, secondstring);
    // Print the sum of both integer variables on a new line.
    cout << secondint+i << endl;
    // Print the sum of the double variables on a new line.
    cout << seconddouble+d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << secondstring << endl;
    return 0;
}
