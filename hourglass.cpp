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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    int hourglass_cnt = 0;
    int hourglass_max = 0;
    /*
    arr = {{0, 1, 0, 0, 0, 0},
           {1, 2, 2, 3, 4, 5},
           {0, 2, 0, 0, 0, 0},
           {0, 3, 0, 5, 0, 0},
           {0, 4, 0, 0, 7, 0},
           {0, 5, 0, 0, 0, 8}};
    */
    arr = {{1, 1, 1, 0, 0, 0},
           {0, 1, 0, 0, 0, 0},
           {1, 1, 1, 0, 0, 0},
           {0, 0, 2, 2, 4, 0},
           {0, 0, 0, 2, 0, 0},
           {0, 0, 1, 2, 4, 0}};

    for(int arr_i = 0;arr_i < 6;arr_i++){
       if (arr_i < 1 || arr_i > 4) continue;
       for(int arr_j = 0;arr_j < 6;arr_j++){
          if (arr_j < 1 || arr_j > 4) continue;
          hourglass_cnt = 0;
          hourglass_cnt += arr[arr_i-1][arr_j-1];
          hourglass_cnt += arr[arr_i-1][arr_j];
          hourglass_cnt += arr[arr_i-1][arr_j+1];
          hourglass_cnt += arr[arr_i][arr_j];
          hourglass_cnt += arr[arr_i+1][arr_j-1];
          hourglass_cnt += arr[arr_i+1][arr_j];
          hourglass_cnt += arr[arr_i+1][arr_j+1];
          /*
          cout << endl;
          cout << arr[arr_i-1][arr_j-1] << ' ';
          cout << arr[arr_i-1][arr_j] << ' ';
          cout << arr[arr_i-1][arr_j+1] << ' ';
          cout << endl;
          cout << "  " << arr[arr_i][arr_j] << ' ';
          cout << endl;
          cout << arr[arr_i+1][arr_j-1] << ' ';
          cout << arr[arr_i+1][arr_j] << ' ';
          cout << arr[arr_i+1][arr_j+1] << ' ';
          cout << endl;

          cout << hourglass_cnt << endl;
          */

          if (hourglass_max < hourglass_cnt) {
              hourglass_max = hourglass_cnt;
          }
       }

    }
    cout << hourglass_max << endl;
    return 0;
}

