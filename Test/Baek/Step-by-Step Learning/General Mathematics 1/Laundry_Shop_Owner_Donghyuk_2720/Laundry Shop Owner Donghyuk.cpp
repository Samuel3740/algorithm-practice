#include <iostream>
using namespace std;

int main(){
    int T, C, Q, D, N, P, tmp;

    cin >> T;

    for(int i = 0; i < T; ++i){
        cin >> C;

        Q = C / 25;
        tmp = C % 25;

        D = tmp / 10;
        tmp = tmp % 10;

        N = tmp / 5;
        tmp = tmp % 5;

        P = tmp;

        cout <<  Q << " " << D << " " << N << " " << P << endl;
    }
}