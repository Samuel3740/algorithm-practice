#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    int case1 = B + C;
    int case2 = A + D;
    
    cout << min(case1, case2) << endl;
    
    return 0;
}