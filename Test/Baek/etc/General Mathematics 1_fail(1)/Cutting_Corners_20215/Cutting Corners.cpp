#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int w, h;

    cin >> w >> h;

    double rect = w + h;
    double diag = sqrt(w * w + h * h);
    double diff = rect - diag;

    cout << fixed << setprecision(10) << diff << endl;

    return 0;
}