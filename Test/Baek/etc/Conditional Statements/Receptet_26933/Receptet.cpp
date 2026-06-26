#include <iostream>
using namespace std;

int main(){
    int N, H, B, K;;
    int total_cost = 0;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> H >> B >> K;

        if(B > H){
            total_cost += (B - H) * K;
        }
    }

    cout << total_cost << endl;
}