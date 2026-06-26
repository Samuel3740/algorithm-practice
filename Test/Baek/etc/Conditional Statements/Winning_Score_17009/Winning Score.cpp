#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a3, a2, a1, b3, b2, b1;
    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;

    int apples = a3 * 3 + a2 * 2 + a1;
    int bananas = b3 * 3 + b2 * 2 + b1;

    if (apples > bananas) {
        cout << 'A';
    }
    else if (bananas > apples) {
        cout << 'B';
    }
    else {
        cout << 'T';
    }

    return 0;
}