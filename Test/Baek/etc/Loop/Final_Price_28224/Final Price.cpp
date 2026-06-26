#include <iostream>
using namespace std;

int main(){
    int n, input;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> input;
        sum += input;
    }

    cout << sum;
}