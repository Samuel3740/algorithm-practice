#include <iostream>
using namespace std;

int main(){
    int current_passengers = 0;
    int max_passengers = 0;
    
    for(int i = 0; i < 10; i++){
        int down, up;
        cin >> down >> up;
        
        current_passengers = current_passengers - down + up;
        
        if(current_passengers > max_passengers){
            max_passengers = current_passengers;
        }
    }
    
    cout << max_passengers << endl;
    
    return 0;
}