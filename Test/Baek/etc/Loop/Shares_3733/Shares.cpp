#include <iostream>
using namespace std;

int main(){
    int N, S;
    
    while(cin >> N >> S){
        int x = S / (N + 1);
        
        cout << x << endl;
    }
    
    return 0;
}