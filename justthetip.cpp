#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tip;
    int tax;
    int totalcost;
    double mealcost;
    double tip_percent;
    double tax_percent;

    cin >> mealcost;
    cin >> tip;
    cin >> tax;

    tip_percent = (double) tip/100;
    tax_percent = (double) tax/100;
    cout << tip_percent << endl;
    cout << tax_percent << endl;

    totalcost = round(mealcost * (tip_percent+tax_percent) + mealcost);
    cout << "The total meal cost is " << totalcost << " dollars." << endl;

    

    return 0;
}

