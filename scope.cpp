#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

        Difference (vector<int> elements) {
            this->maximumDifference = 0;
            this->elements = elements;
        }

    void computeDifference () {
        int x, y, iter, inneriter;
        int localmax = 0;
        int absoluteval = 0;

        for (iter = 0; iter < elements.size(); iter++) {
            x = elements[iter];
            for (inneriter = iter; inneriter < elements.size(); inneriter++) {
                if (inneriter == iter) continue;
                y = elements[inneriter];
                localmax = abs(x-y);
                if (localmax > maximumDifference) maximumDifference = localmax;
            }
        }
   }
};



int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << "maxdiff = " << d.maximumDifference << endl;
    
    return 0;
}
