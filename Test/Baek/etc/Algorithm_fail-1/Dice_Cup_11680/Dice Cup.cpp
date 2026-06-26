#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;

    cin >> N >> M;

    vector<int> count(N + M + 1, 0);

    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= M; ++j){
            count[i + j]++;
        }
    }

    int max_count = *max_element(count.begin(), count.end());


    for(int sum = 2; sum <= N + M; ++sum){
        if(count[sum] == max_count){
            cout << sum << endl;
        }
    }

    return 0;
}