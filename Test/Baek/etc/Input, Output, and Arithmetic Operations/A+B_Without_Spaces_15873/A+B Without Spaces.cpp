#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;

    cin >> input;
    cin.get();    
    
    int len = input.length();

    int A = 0, B = 0;
    
    if(len == 2){
        A = input[0] - '0';
        B = input[1] - '0';
    }
    else if(len == 3){
        if(input[1] == '0'){
            A = 10;
            B = input[2] - '0';
        }
        else{
            A = input[0] - '0';
            B = 10;
        }
    }
    else if(len == 4){
        A = 10;
        B = 10;
    }
    
    cout << A + B << endl;
    
    return 0;
}