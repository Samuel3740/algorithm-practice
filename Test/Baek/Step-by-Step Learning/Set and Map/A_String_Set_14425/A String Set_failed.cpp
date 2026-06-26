/*시간 초과 코드*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    int cnt = 0;
    cin >> N >> M;
    
    vector<string> std_str(N);
    vector<string> total_str(M);

    for(int i = 0; i < N; ++i){
        cin >> std_str[i];
    }

    for(int i = 0; i < M; ++i){
        cin >> total_str[i];
        if(find(std_str.begin(), std_str.end(), total_str[i]) != std_str.end()){
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}