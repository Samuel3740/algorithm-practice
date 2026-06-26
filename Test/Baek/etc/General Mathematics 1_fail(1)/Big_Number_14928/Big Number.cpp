#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;

    cin >> n;
    
    long long remainder = 0;
    long long mod = 20000303;
    
    for(char digit : n){
        remainder = (remainder * 10 + (digit - '0')) % mod;
    }
    
    cout << remainder << endl;
    
    return 0;
}