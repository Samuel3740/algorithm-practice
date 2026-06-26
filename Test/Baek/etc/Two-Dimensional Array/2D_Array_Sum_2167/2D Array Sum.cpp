#include <iostream>
#include <vector>
using namespace std;

int main(){    
    int N, M, K;
    cin >> N >> M;
    
    vector<vector<long long>> prefix(N + 1, vector<long long>(M + 1, 0));
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            int num;
            cin >> num;
            prefix[i][j] = num + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }
    
    cin >> K;
    
    for(int q = 0; q < K; q++){
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        long long result = prefix[x][y] - prefix[i-1][y] - prefix[x][j-1] + prefix[i-1][j-1];
        cout << result << "\n";
    }
    
    return 0;
}