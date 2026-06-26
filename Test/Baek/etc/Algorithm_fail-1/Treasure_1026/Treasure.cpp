#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    long long S = 0;
    
    cin >> N;
    
    vector<long long> A(N), B(N);
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<long long>());
    
    for(int i = 0; i < N; i++){
        S += A[i] * B[i];
    }
    
    cout << S << endl;
    
    return 0;
}