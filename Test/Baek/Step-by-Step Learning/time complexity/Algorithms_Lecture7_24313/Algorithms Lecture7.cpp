#include <iostream>
using namespace std;

int main(){
    int a1, a0, c, n0;
    
    cin >> a1 >> a0 >> c >> n0;

    bool valid = true;
    for(int n = n0; n <= 100; ++n){
        int fn = a1 * n + a0;
        int cn = c * n;

        if(fn > cn){
            valid = false;
            break;
        }
    }

    cout << (valid ? 1 : 0) << endl;

    return 0;
}