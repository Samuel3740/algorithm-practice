#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    int rooms = 0;

    cin >> N >> K;
    
    int cnt[2][7] = {};
    
    for(int i = 0; i < N; i++){
        int s, y;
        cin >> s >> y;
        
        cnt[s][y]++;
    }
    
    for(int s = 0; s < 2; s++){
        for(int y = 1; y <= 6; y++){
            if(cnt[s][y] > 0){
                rooms += (cnt[s][y] + K - 1) / K;
            }
        }
    }
    
    cout << rooms << endl;

    return 0;
}