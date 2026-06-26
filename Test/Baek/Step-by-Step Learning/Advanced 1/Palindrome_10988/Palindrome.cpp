#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    
    if(reversed_str == str){
        cout << "1";
    }
    else{
        cout << "0";
    }
}