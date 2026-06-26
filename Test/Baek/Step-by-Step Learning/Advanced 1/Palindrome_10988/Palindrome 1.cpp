#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str, reversed;
    getline(cin, str);

    reversed = str;

    reverse(reversed.begin(),reversed.end());
    if(reversed == str){
        cout << "1";
    }
    else{
        cout << "0";
    }
    }