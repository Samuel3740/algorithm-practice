#include <iostream>
#include <string>
using namespace std;

int main(){
    string word, banned = "CAMBRIDGE";
    cin >> word;

    for (char c : word){
        if (banned.find(c) == string::npos){
            cout << c;
        }
    }
    cout << endl;

    return 0;
}