#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> arr(N+1);
 
    for (int i = 1; i < N + 1; ++i){
        arr[i] = i;
    }
 
    for (int u = 0; u < M; ++u){
        int i, j;
        cin >> i >> j;
        swap(arr[i], arr[j]);
    }
 
    for (int i = 1; i < N + 1; ++i){
        cout << arr[i] << " ";
    }
}