#include <iostream>
using namespace std;


int main() {
    int T;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int dp[15][15];
    

    for (int i = 1; i <= 14; i++) {
        dp[0][i] = i;
    }
    

    for (int floor = 1; floor <= 14; floor++) {
        for (int room = 1; room <= 14; room++) {
            dp[floor][room] = 0;
            for (int j = 1; j <= room; j++) {
                dp[floor][room] += dp[floor-1][j];
            }
        }
    }
    

    cin >> T;
    

    while (T--) {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }
    
    return 0;
}