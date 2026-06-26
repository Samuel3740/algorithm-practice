#include <iostream>
using namespace std;

int main(){
    int N;
    long long sum = 0;
    long long cube_sum = 0;

    cin >> N;
    

    for(int i = 1; i <= N; i++){
        sum += i;
    }

    long long sum_squared = sum * sum;
    

    for(int i = 1; i <= N; i++){
        cube_sum += (long long)i * i * i;
    }
    
    cout << sum << endl;
    cout << sum_squared << endl;
    cout << cube_sum << endl;
    
    return 0;
}