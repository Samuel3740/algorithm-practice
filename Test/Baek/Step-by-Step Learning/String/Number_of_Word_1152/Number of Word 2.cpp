#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 1;  
    string input;
    getline(cin, input); 
    
    size_t pos = 0;
    while((pos = input.find(" ", pos)) != string::npos){
        count++;
        pos++;
    }

    cout << count;
}
