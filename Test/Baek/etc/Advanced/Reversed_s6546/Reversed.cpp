#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string str;
        int a, b;

        cin >> str >> a >> b;

        int length = str.length();

        string result = str.substr(0, a) + str.substr(b, length);

        cout << result << '\n';
    }
}
