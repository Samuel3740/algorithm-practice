#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;
    string S;

    cin >> S;

    for (char c : S) {
        if (c == ',') count++;
    }
    cout << count;

    return 0;
}