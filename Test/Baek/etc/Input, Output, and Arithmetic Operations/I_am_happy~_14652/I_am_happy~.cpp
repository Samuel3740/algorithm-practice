#include <iostream>
using namespace std;

int main(){    
    long long N, M, K;
    cin >> N >> M >> K;
    
    long long row = K / M;
    long long col = K % M;
    
    cout << row << " " << col << "\n";
    
    return 0;
}