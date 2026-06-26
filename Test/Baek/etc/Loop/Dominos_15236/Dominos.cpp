#include <iostream>
using namespace std;

int main(){
    int N;
    long long total = 0;

    cin >> N;

    for(int i = 0; i <= N; ++i){
        for(int j = i; j <= N; ++j){
            total += i + j;
        }
    }

    cout << total << endl;

    return 0;
}