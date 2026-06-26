#include <iostream>
using namespace std;

int main(){
    int X, N;

    cin >> X >> N;  
    
    int totalMB = X;  
    

    for(int i = 0; i < N; i++){
        int Pi;

        cin >> Pi;  

        totalMB = totalMB - Pi + X;  
    }
    
    cout << totalMB << endl;
    
    return 0;
}