#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 0; i < T; ++i){
        int N, M;
        cin >> N >> M;
        
        long long dp[30][30] = {0};
        
        for(int j = 0; j <= M; j++){
            dp[0][j] = 1;
        }
        
        for(int j = 1; j <= N; j++){
            for(int k = j; k <= M; k++){
                dp[j][k] = dp[j][k-1] + dp[j-1][k-1];
            }
        }
        
        cout << dp[N][M] << endl;
    }
    
    return 0;
}