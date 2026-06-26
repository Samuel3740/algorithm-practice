#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int W, H;
    
    cin >> W >> H;
    
    double area = (double)W * H / 2;
    
    cout << fixed << setprecision(1) << area << endl;
    
    return 0;
}