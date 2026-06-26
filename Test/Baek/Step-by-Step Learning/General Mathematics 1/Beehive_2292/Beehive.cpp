#include <iostream>
using namespace std;

int main(){
    int N;
    int n = 0;

    cin >> N;
    
    for(int sum = 2; sum <= N; ++n){
        sum += 6*n;
    }

    if(N == 1){
        n = 1;
    }

    cout << n;
}