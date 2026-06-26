#include <iostream>
using namespace std;

int main(){
    int bottles[6];
    int total = 0;

    for(int i = 0; i < 6; i++){
        cin >> bottles[i];
        total += bottles[i] * 5; 
    }

    cout << total << endl;
}