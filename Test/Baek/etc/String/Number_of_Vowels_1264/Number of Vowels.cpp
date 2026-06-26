#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    
    while(getline(cin, line)){
        int count = 0;

        if(line == "#") break;

        for(char c : line){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}