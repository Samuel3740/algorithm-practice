#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;

    while(true){
        cin >> n;

        if(n == 0) break;
        
        string s = to_string(n);
        string reversed = s;

        reverse(reversed.begin(), reversed.end());
        
        if(s == reversed){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }
    
    return 0;
}