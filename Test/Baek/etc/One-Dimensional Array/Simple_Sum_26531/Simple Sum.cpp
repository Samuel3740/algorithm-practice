#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;

    getline(cin, input);
 
    int a = input[0] - '0'; 
    int b = input[4] - '0'; 
    int c = input[8] - '0';

    if(a + b == c){
        cout << "YES" << endl;
    } 
    else{
        cout << "NO" << endl;
    }
}