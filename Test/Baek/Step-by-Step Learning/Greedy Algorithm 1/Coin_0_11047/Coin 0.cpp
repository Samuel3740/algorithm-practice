#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    int count = 0;

    cin >> n >> k;
    
    int coins[10];

    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    
    sort(coins, coins + n, greater<int>());

    for (int i = 0; i < n; i++) {
        count += k / coins[i];
        k %= coins[i];
    }
    
    cout << count << endl;
    
    return 0;
}