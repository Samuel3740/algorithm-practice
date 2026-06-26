#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    string input;
    getline(cin, input);

    for(int i = 0; i < input.length(); ++i){
        if(i == 0 && input[i] != ' '){
            count++;
        }
        else if(input[i] != ' ' && input[i-1] == ' '){
            count++;
        }
    }
    cout << count;
}