#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int min_prime = -1;

    for(int i = M; i < N + 1; ++i){
        if(isPrime(i)){
            sum += i;
            if(min_prime == -1){
                min_prime = i;
            }
        }
    }

    if(sum == 0){
        cout << -1 << endl;
    } 
    else{
        cout << sum << endl;
        cout << min_prime << endl;
    }
    return 0;
}