#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    
    cin >> a >> b;
    
    string answer(a, '*');
    
    for (int i = 0; i < b; i++) {
        cout << answer << '\n';
    }
    
    return 0;
}