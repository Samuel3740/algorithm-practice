#include <iostream>
#include <vector>
#include <string>
using namespace std;


string addNumbers(string a, string b){
    string result = "";
    int carry = 0;

    if(a.length() < b.length()) swap(a, b);
    
    int aLen = a.length();
    int bLen = b.length();
    
    for(int i = 0; i < aLen; i++){
        int aDigit = a[aLen - 1 - i] - '0';
        int bDigit = 0;
        if(i < bLen){
            bDigit = b[bLen - 1 - i] - '0';
        }
        
        int sum = aDigit + bDigit + carry;
        result = char('0' + sum % 10) + result;
        carry = sum / 10;
    }
    
    if(carry > 0){
        result = char('0' + carry) + result;
    }
    
    return result;
}


string multiplyNumbers(string a, string b){
    int aLen = a.length();
    int bLen = b.length();
    
    vector<int> result(aLen + bLen, 0);
    
    for(int i = aLen - 1; i >= 0; i--){
        for(int j = bLen - 1; j >= 0; j--){
            int mul = (a[i] - '0') * (b[j] - '0');
            int p1 = i + j;
            int p2 = i + j + 1;
            int sum = mul + result[p2];
            
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }
    
    string str = "";

    for(int i = 0; i < result.size(); i++){
        if(!(str.empty() && result[i] == 0)){
            str += to_string(result[i]);
        }
    }
    
    return str.empty() ? "0" : str;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a, op, b, result;
    cin >> a >> op >> b;
    

    if(op == "+"){
        result = addNumbers(a, b);
    }
    else{
        result = multiplyNumbers(a, b);
    }
    
    cout << result << endl;
    
    return 0;
}