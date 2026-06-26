#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long M, K;
    cin >> M >> K;

    if (M % K == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}