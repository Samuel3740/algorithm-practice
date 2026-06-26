#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;

    cin >> T;
    
    while (T--) {
        int count = 0;
        bool valid = true;
        string str;

        cin >> str;


        for (char c : str) {
            if (c == '(') {
                count++;
            } 
            else {
                count--;
                if (count < 0) {
                    valid = false;
                    break;
                }
            }
        }
        
        if (valid && count == 0) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}