#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int d1, d2;
    cin >> d1 >> d2;
    
    double pi = 3.141592;
    double perimeter = 2 * d1 + 2 * pi * d2;
    
    cout << fixed << setprecision(6) << perimeter << endl;
    
    return 0;
}