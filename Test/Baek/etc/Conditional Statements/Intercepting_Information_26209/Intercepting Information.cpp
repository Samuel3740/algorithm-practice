#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;

    for (int i = 0; i < 8; i++) {
        cin >> x;

        if (x == 9) {
            cout << "F";

            return 0;
        }
    }
    cout << "S";
    
    return 0;
}