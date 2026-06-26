#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B, C;
    cin >> A >> B >> C;

    long long total = A + B;

    if(total >= 2 * C){
        cout << total - 2 * C << endl;
    }
    else{
        cout << total << endl;
    }

    return 0;
}