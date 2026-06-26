#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while (N--) {
        string s1, s2;
        bool isPossible = true;
        vector<int> count(26, 0);
        
        cin >> s1 >> s2;

        if (s1.length() != s2.length()) {
            cout << "Impossible\n";
            continue;
        }

        for (int i = 0; i < s1.length(); i++) {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isPossible = false;
                break;
            }
        }

        if (isPossible) {
            cout << "Possible\n";
        } else {
            cout << "Impossible\n";
        }
    }

    return 0;
}