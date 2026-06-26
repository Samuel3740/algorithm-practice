#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, y;

    if (cin >> m >> n >> y) {
        cout << m * n << endl;
    }

    return 0;
}