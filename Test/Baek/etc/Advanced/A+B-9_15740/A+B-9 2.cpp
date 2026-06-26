#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b){
    int sum;
    string result;
    int carry = 0;

    int lenA = a.size();
    int lenB = b.size();
    
    if(lenA < lenB){
        swap(a, b);
        swap(lenA, lenB);
    }
    b.insert(b.begin(), lenA - lenB, '0');
    
    for(int i = lenA - 1; i >= 0; --i){
        sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }
    if(carry){
        result += '1';
    }
    
    reverse(result.begin(), result.end());
    return result;
}

string subtract(string a, string b){
    string result;
    int borrow = 0, sub;
    bool negative = false;
    
    if(a < b){
        swap(a, b), negative = true;
    }
    int lenA = a.size(), lenB = b.size();
    b.insert(b.begin(), lenA - lenB, '0');
    
    for(int i = lenA - 1; i >= 0; --i){
        sub = (a[i] - '0') - (b[i] - '0') - borrow;
        if(sub < 0){
            sub += 10;
            borrow = 1;
        }
        else borrow = 0;
        result += sub + '0';
    }
    
    int newSize = result.size();
    for(int i = newSize - 1; i > 0 && result[i] == '0'; --i){
        result.pop_back();
    }
    
    if(negative){
        result += '-';
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    string x, y;
    cin >> x >> y;
    
    bool negX = (x[0] == '-');
    bool negY = (y[0] == '-');
    if(negX){
        x = x.substr(1);
    }
    if(negY){
        y = y.substr(1);
    }
    
    string result = ((negX ^ negY) ? subtract(x, y) : add(x, y));
    cout << result << "\n";
    
    return 0;
}
