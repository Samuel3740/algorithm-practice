#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int unicode = 0xAC00 + (n - 1);
    
    cout << (char)(0xE0 | (unicode >> 12));
    cout << (char)(0x80 | ((unicode >> 6) & 0x3F));
    cout << (char)(0x80 | (unicode & 0x3F));
    
    return 0;
}