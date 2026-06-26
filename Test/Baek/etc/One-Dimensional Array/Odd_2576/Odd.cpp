#include <iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numbers[7];
    int oddSum = 0;
    int minOdd = 101; 
    bool hasOdd = false;
    
    for(int i = 0; i < 7; i++){
        cin >> numbers[i];
        
        if(numbers[i] % 2 == 1){
            hasOdd = true;
            oddSum += numbers[i];
            
            if(numbers[i] < minOdd){
                minOdd = numbers[i];
            }
        }
    }
    

    if(hasOdd){
        cout << oddSum << "\n";
        cout << minOdd << "\n";
    }
    else{
        cout << -1 << "\n";
    }
    
    return 0;
}