#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    
    int result = min(A / 2, B);
    
    cout << result << endl;
    
    return 0;
}