#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;

    cin >> T;

    cin.ignore(); 

    for (int i = 0; i < T; ++i) {
        string input;

        getline(cin, input); 

        size_t comma_pos = input.find(',');
        string a_str = input.substr(0, comma_pos);
        string b_str = input.substr(comma_pos + 1);

        int a = stoi(a_str);
        int b = stoi(b_str);


        cout << a + b << endl;
    }

    return 0;
}