#include <iostream>
using namespace std;

int main(){
    int l, w, a;
    
    while(1){
        cin >> l >> w >> a;
        
        if(l == 0 && w == 0 && a == 0){
            break;
        }
        if(l == 0 && w != 0 && a != 0){
            l = a / w;
        } 
        else if(w == 0 && l != 0 && a != 0){
            w = a / l;
        } 
        else if(a == 0 && l != 0 && w != 0){
            a = l * w;
        }

        cout << l << " " << w << " " << a << endl;
    }
    return 0;
}