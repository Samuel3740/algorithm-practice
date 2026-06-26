#include <iostream>
using namespace std;

bool isPrime(long long n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    if (n < 9) return true;
    if (n % 3 == 0) return false;
    
    for(long long i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        
        while(!isPrime(n)){
            n++;
        }
        
        cout << n << "\n";
    }
    
    return 0;
}