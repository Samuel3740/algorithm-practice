#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s, result;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] != s[i - 1]) {
                result += s[i];
            }
        }

        cout << result << '\n';
    }

    return 0;
}