#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int s, n;
        cin >> s >> n;
        
        int total = s;

        for(int i = 0; i < n; i++){
            int q, p;
            cin >> q >> p;

            total += q * p;
        }
        
        cout << total << "\n";
    }
    
    return 0;
}