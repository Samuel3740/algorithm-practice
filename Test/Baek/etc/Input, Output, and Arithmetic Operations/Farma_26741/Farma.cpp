#include <iostream>
using namespace std;

int main(){
    long long X, Y;
    
    cin >> X >> Y;

    long long cows = (Y - 2 * X) / 2;
    long long chickens = X - cows;

    cout << chickens << " " << cows << endl;

    return 0;
}