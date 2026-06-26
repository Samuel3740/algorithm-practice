#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;

    cin >> n;
    
    int count = 0;
    int num = 665;  
    
    while(count < n){
        num++;
        string s = to_string(num);
        
        if(s.find("666") != string::npos){
            count++;
        }
    }
    
    cout << num << endl;
    
    return 0;
}