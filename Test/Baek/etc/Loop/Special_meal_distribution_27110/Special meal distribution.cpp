#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, A, B, C, Satisfied;

    cin >> N;
    cin >> A >> B >> C;

    Satisfied = min(N, A) + min(N, B) + min(N, C);

    cout << Satisfied << endl;
}
