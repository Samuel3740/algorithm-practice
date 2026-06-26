#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;
    
    cin >> a;

    double p1 = 100.0 / a;
    double p2 = 100.0 / (100 - a);

    cout << fixed << setprecision(6) << p1 << endl;
    cout << fixed << setprecision(6) << p2 << endl;

    return 0;
}