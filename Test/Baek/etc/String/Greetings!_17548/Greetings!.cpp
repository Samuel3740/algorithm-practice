#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int e_count = 0;

    cin >> s;

    for(char c : s){
        if(c == 'e'){
            e_count++;
        }
    }

    cout << 'h';

    for(int i = 0; i < 2 * e_count; i++){
        cout << 'e';
    }

    cout << 'y' << endl;
}