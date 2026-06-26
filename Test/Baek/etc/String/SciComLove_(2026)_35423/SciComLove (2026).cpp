#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x = 0, y = 0;
    string result, t;

    cin >> t;

    for (char ch : t) {
        if (ch == 'S'){
            x++;
        }
        else if (ch == 'L'){
            y++;
        }
    }

    result.reserve(t.size());

    for (long long i = 0; i < x; i++){
        result += "SciCom";
    }
    for (long long i = 0; i < y; i++){
        result += "Love";
    }
    cout << result;
    
    return 0;
}