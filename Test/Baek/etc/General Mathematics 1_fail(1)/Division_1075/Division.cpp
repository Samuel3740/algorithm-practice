#include <iostream>
using namespace std;

int main(){
    long long N;
    int F;

    cin >> N >> F;
    
    long long base = (N / 100) * 100;
    
    for(int i = 0; i < 100; i++){
        if((base + i) % F == 0){
            if(i < 10){
                cout << "0" << i << endl;
            }
            else{
                cout << i << endl;
            }
            break;
        }
    }
    
    return 0;
}