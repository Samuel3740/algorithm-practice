#include <iostream>
using namespace std;


long long combination(int n, int r){
    if(r > n) return 0;
    if(r == 0 || r == n) return 1;
    if(r > n - r) r = n - r;
    
    long long result = 1;

    for(int i = 0; i < r; i++){
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}


int main(){
    int T;
    cin >> T;
    
    while (T--){
        int N, M;
        cin >> N >> M;
        
        cout << (N <= M ? combination(M, N) : 0) << endl;
    }
    
    return 0;
}