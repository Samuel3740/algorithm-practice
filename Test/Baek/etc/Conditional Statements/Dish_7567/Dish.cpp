#include <iostream>
#include <string>
using namespace std;

int main(){
    int height = 10;
    string s;

    cin >> s;
    
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            height += 5;
        }
        else{
            height += 10;
        }
    }
    
    cout << height;
    
    return 0;
}