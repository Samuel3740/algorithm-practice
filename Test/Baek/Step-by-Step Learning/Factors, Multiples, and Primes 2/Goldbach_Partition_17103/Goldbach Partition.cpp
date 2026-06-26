#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000001;
bool isPrime[MAX];


void sieve(){
    fill(isPrime, isPrime + MAX, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i * i < MAX; i++){
        if(isPrime[i]){
            for (int j = i * i; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
}


int main(){
    sieve();
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        int count = 0;
        
        cin >> n;
        
        for(int i = 2; i <= n / 2; i++){
            if(isPrime[i] && isPrime[n - i]){
                count++;
            }
        }
        
        cout << count << '\n';
    }
    
    return 0;
}