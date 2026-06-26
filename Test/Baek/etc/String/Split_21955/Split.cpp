#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; 

    cin >> s;

    int half = s.length() / 2;

    cout << s.substr(0, half) << ' ' << s.substr(half, half);
}