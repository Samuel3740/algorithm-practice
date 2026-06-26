#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int i, j, N, M;
    cin >> N >> M;

    vector<int> arr(N);

    for (int n = 0; n < N; ++n){
        arr[n] = n + 1;
    }

    for (int n = 0; n < M; ++n)
    {
        cin >> i >> j;
        reverse(arr.begin() + i - 1, arr.begin() + j); // 두번째 인자 arr.begin() + j는 범위에 포함 X
    }

    for (int n = 0; n < N; ++n){
        cout << arr[n] << " ";
    }
}
