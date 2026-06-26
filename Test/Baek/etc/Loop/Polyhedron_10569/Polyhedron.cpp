#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int V, E;
        cin >> V >> E;

        int F = 2 - V + E;

        cout << F << endl;
    }
    
    return 0;
}