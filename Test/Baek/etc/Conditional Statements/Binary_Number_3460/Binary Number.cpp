#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int n;
        bool first = true;

        cin >> n;

        for(int i = 0; n > 0; i++, n >>= 1){
            if(n & 1){
                if(!first){
                    cout << ' ';
                }

                cout << i;

                first = false;
            }
        }

        cout << '\n';
    }
    
    return 0;
}