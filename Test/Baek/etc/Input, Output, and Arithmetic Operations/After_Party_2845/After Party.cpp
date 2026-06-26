#include <iostream>
using namespace std;

int main(){
    int L, P;
    int a, b, c, d, e;

    cin >> L >> P;
    cin >> a >> b >> c >> d >> e;

    a = a - L * P;
    b = b - L * P;
    c = c - L * P;
    d = d - L * P;
    e = e - L * P; 

    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    
    return 0;
}