#include <iostream>
using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;
    
    int performance = (B / A) * 3 * C;

    cout << performance << endl;
    
    return 0;
}