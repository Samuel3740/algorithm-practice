#include <iostream>
#include <string>
using namespace std;

int main(){
    int R, C;
    cin >> R >> C;
    
    string line(C, '*');

    for(int i = 0; i < R; i++){
        cout << line << '\n';
    }
    
    return 0;
}