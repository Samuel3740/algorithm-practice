#include <iostream>
using namespace std;

int main(){
    int N;
    int n = 0;
    int sum = 2;

    cin >> N;

    while(sum <= N){
        sum += 6 * n;
        ++n;
    }

    if(N == 1){
        n = 1;
    }

    cout << n;
}