#include <iostream>
#include <string>
using namespace std;

int main(){
    int unicode = 0;

    string s;
    cin >> s;

    unsigned char byte1 = (unsigned char)s[0];
    unsigned char byte2 = (unsigned char)s[1];
    unsigned char byte3 = (unsigned char)s[2];
    
    unicode = ((byte1 & 0x0F) << 12) | ((byte2 & 0x3F) << 6) | (byte3 & 0x3F);

    int result = unicode - 0xAC00 + 1;

    cout << result << endl;
    
    return 0;
}