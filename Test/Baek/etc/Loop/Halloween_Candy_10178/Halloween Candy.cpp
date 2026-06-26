#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int c, v;
        cin >> c >> v;
        
        int you_get = c / v;
        int dad_gets = c % v;
        
        cout << "You get " << you_get << " piece(s) and your dad gets " << dad_gets << " piece(s)." << endl;
    }
    
    return 0;
}