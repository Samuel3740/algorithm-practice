#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long H,W,N,M;
    cin >> H >> W >> N >> M;

    cout << ((H+N)/(N+1))*((W+M)/(M+1)) << endl;
}