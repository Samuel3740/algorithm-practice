#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a;
    cin >> a;
    
    double side = sqrt((double)a);
    double perimeter = 4.0 * side;
    
    cout << fixed << setprecision(10) << perimeter << endl;
    
    return 0;
}