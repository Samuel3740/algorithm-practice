#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(char& c : s){
        if(isupper(c)){
            c = 'A' + (c - 'A' + 13) % 26;
        }
        else if(islower(c)){
            c = 'a' + (c - 'a' + 13) % 26;
        }
    }

    cout << s << endl;
}