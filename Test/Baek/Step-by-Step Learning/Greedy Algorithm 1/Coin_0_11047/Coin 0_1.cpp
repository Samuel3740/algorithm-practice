#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, K;
    int cnt = 0;

    cin >> N >> K;

    vector<int> coin(N);

    for(int i = 0; i < N; i++){
        cin >> coin[i];
    }

    sort(coin.begin(), coin.end());

    while(N--){
        if(K == 0) break; 

        if(coin[N] <= K){
            cnt += K / coin[N];  
            K %= coin[N];        
        }
    }

    cout << cnt << endl;

    return 0;
}