#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int num = stoi(str);
    
    bool contains7 = (str.find('7') != string::npos);
    bool divisibleBy7 = (num % 7 == 0);
    

    if(!contains7 && !divisibleBy7){
        cout << 0 << endl;
    }
    else if(!contains7 && divisibleBy7){
        cout << 1 << endl;
    }
    else if(contains7 && !divisibleBy7){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }
    
    return 0;
}