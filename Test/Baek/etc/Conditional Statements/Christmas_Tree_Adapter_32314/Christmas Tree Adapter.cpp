#include <iostream>
using namespace std;

int main(){
    int a, w, v;
    cin >> a >> w >> v;
    
    int adapter_ampere = w / v;
    
    if(adapter_ampere >= a){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    
    return 0;
}