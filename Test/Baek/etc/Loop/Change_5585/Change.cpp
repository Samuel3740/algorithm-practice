#include <iostream>
using namespace std;

int main(){
    int price;
    int coins = 0;

    cin >> price;
    
    int change = 1000 - price;
    
    int denominations[] = {500, 100, 50, 10, 5, 1};
    
    for(int i = 0; i < 6; i++){
        coins += change / denominations[i];
        change %= denominations[i];
    }
    
    cout << coins << endl;
    
    return 0;
}