#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, K, C;

    if (!(cin >> M >> K >> C)) {
        return 0;
    }
    cout << M * C << endl;

    return 0;
}