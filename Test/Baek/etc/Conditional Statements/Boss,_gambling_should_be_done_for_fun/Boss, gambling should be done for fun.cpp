#include <iostream>
using namespace std;

int main(){
    int bet;
    long long total_loss = 0;
    
    while(true){
        cin >> bet;
        if (bet == -1) break;
        
        total_loss += bet;
    }
    
    cout << total_loss << endl;
    
    return 0;
}