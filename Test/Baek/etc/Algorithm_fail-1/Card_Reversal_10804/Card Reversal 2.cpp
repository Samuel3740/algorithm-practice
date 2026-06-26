#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int cards[21];

    for(int i = 1; i <= 20; i++){
        cards[i] = i;
    }
    
    for(int i = 0; i < 10; i++){
        int a, b;
        cin >> a >> b;

        sort(cards + a, cards + b + 1, greater<int>());
    }
    
    for(int i = 1; i <= 20; i++){
        cout << cards[i];

        if (i < 20) cout << " ";
    }
    
    cout << endl;
    
    return 0;
}