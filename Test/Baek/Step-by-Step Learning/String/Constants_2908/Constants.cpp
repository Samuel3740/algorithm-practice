#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int C = stoi(A);
    int D = stoi(B);

    cout << (C > D ? C : D);
}
