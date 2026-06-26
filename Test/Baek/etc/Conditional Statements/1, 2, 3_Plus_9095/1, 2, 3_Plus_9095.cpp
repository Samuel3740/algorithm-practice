#include <iostream>
#include <vector>
using namespace std;

int main(){
    int input;
    cin >> input;

    for (int i = 0; i < input; i++){
        int n;
        cin >> n;

        if (n == 0){
            cout << 1 << endl;
            continue;
        }
        if (n == 1){
            cout << 1 << endl;
            continue;
        }
        if (n == 2){
            cout << 2 << endl;
            continue;
        }
        if (n == 3){
            cout << 4 << endl;
            continue;
        }

        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for (int j = 4; j <= n; j++){
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        }
        cout << dp[n] << endl;
    }
}
