// i ~ j번 배열 변경 예제 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, i, j;
    cin >> N >> M;
    vector<int> arr(N);
    
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }

    for(int n = 0; n < M; ++n){
        cin >> i >> j;
        reverse(arr.begin() + i - 1, arr.begin() + j); // 두번째 인자 arr.begin() + j는 범위에 포함 X
    }
    
    for(int n = 0; n < N; ++n){
        cout << arr[n] << " ";
    }
    cout << endl;
}
