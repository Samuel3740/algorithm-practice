#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num){
    if (num < 2){
        return false;
    }
    for (int i = 2; i * i <= num; ++i){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    int PrimeCount = 0;
    
    cin >> N;
    vector<int> arr(N);
    
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }


    for(int num : arr){
        if(isPrime(num)){
            PrimeCount++;
        }
    }
    
    cout << PrimeCount << endl;
}
