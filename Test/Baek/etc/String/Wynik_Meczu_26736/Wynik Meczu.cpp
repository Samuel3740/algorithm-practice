#include <iostream>
#include <string>
using namespace std;

int main() {
    int a_count = 0, b_count = 0;

    string s;
    
    cin >> s;

    for (char c : s) {
        if (c == 'A') a_count++;
        else if (c == 'B') b_count++;
    }

    cout << a_count << " : " << b_count << endl;

    return 0;
}