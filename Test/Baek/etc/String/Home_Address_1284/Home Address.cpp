#include <iostream>
#include <string>
using namespace std;

int main(){    
    string address;
    
    while(getline(cin, address)){
        if(address == "0") break;
        
        int width = 0;
        int N = address.length();
        
        width += 2; 
        
        for(int i = 0; i < N; i++){
            char digit = address[i];
            if(digit == '1'){
                width += 2;
            }
            else if(digit == '0'){
                width += 4;
            }
            else{
                width += 3;
            }
        }
        
        width += (N - 1);
        
        cout << width << endl;
    }
    
    return 0;
}