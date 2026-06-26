#include <iostream>
using namespace std;

int main(){
    int HH, MM;
    cin >> HH >> MM;
    MM = MM - 45;
    
    if (MM < 0){
        MM = MM + 60;
        HH = HH - 1;
    }
    
    if (HH < 0){
        HH = 23;
    }
    
    cout << HH << " " << MM << endl;
}
