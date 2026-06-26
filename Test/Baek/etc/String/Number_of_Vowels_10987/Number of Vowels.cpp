#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0;
    string str;

    cin >> str;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++cnt;
        }
    }
    
    cout << cnt << endl;

    return 0;
}