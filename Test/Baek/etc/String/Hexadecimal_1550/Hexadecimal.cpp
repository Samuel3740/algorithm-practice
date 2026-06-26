#include <iostream>
#include <string>
using namespace std;

int main(){
    string hex;
    cin >> hex;

    cout << stoi(hex, nullptr, 16) << endl;
    
    return 0;
}