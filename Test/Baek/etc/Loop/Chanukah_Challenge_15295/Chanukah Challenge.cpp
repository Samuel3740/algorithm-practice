#include <iostream>
using namespace std;

int main(){
    int P;

    cin >> P;

    for(int i = 0; i < P; ++i){
        int K, N;
        
        cin >> K >> N;

        int candles = (N * (N + 1)) / 2 + N;

        cout << K << " " << candles << endl;
    }

    return 0;
}