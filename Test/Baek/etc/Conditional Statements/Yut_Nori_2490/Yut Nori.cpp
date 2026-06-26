#include <iostream>
using namespace std;

int main(){

    for(int i = 0; i < 3; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int back_count = (a == 0) + (b == 0) + (c == 0) + (d == 0);
        
        if(back_count == 1) cout << 'A' << '\n';
        else if(back_count == 2) cout << 'B' << '\n';
        else if(back_count == 3) cout << 'C' << '\n';
        else if(back_count == 4) cout << 'D' << '\n';
        else cout << 'E' << '\n';
    }
    return 0;
}