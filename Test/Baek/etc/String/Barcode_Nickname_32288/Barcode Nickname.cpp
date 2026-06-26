#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n; ++i){
        if(islower(s[i])){
            cout << (char)toupper(s[i]);
        } 
        else{
            cout << (char)tolower(s[i]);
        }
    }

    cout << endl;
    return 0;
}