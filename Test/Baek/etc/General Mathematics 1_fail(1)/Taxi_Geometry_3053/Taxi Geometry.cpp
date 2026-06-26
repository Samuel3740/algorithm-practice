#define _USE_MATH_DEFINES 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int R;
    cin >> R;
    
    double euclidean_area = M_PI * R * R;
    double taxicab_area = 2.0 * R * R;
    
    cout << fixed;
    cout.precision(6);
    cout << euclidean_area << endl;
    cout << taxicab_area << endl;
    
    return 0;
}