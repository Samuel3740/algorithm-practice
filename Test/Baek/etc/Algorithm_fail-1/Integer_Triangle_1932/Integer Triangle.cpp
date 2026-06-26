#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int result = 0;

    cin >> n;

    vector<vector<int>> tri(n + 1, vector<int>(n + 1));
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> tri[i][j];
        }
    }

    dp[1][1] = tri[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                dp[i][j] = dp[i - 1][j] + tri[i][j];
            } else if (j == i) {
                dp[i][j] = dp[i - 1][j - 1] + tri[i][j];
            } else {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
            }
        }
    }

    
    for (int j = 1; j <= n; j++) {
        result = max(result, dp[n][j]);
    }
    cout << result << endl;

    return 0;
}