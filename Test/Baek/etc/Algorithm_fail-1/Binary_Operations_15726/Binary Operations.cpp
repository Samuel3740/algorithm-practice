
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    
    long long case1 = (A * B) / C;
    
    long long case2 = (A * C) / B;
    
    cout << max(case1, case2) << endl;
    
    return 0;
}