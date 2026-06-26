#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b){
    int lenA = a.size();
    int lenB = b.size();

    int maxLen = max(lenA, lenB);

    int carry = 0;
    
    string result = "";

    while(a.size() < maxLen){
        a = '0' + a;
    }
    while(b.size() < maxLen){
        b = '0' + b;
    }

    for(int i = maxLen - 1; i >= 0; --i){
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        int sum = bitA + bitB + carry;
        carry = sum / 2;
        result += (sum % 2) + '0';
    }

    if(carry){
        result += '1';
    }

    reverse(result.begin(), result.end());


    int firstOne = result.find('1');
    
    if(firstOne == string::npos){
        return "0";
    }
    else{
        return result.substr(firstOne);
    }
}

int main(){
    string bin1, bin2;

    cin >> bin1 >> bin2;

    cout << addBinary(bin1, bin2) << endl;

    return 0;
}