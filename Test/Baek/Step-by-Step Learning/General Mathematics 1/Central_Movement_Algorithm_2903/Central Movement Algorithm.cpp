#include <iostream>
using namespace std;

int main(){
    int N, result;
    int dot = 2;

    cin >> N;

    for(int i = 0; i < N; ++i){
        dot = dot*2 -1;
    }
    result = dot*dot;

    cout << result;
}