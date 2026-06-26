#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<int> arr(N);

    for(int n = 0; n < N; ++n){
        arr[n] = n + 1;
    }
    
    for(int n = 0; n < M; ++n){
        int i, j;
        cin >> i >> j;
        swap(arr[i - 1],arr[j - 1]);
    }
   
    for(int n = 0; n < N; ++n){
        cout << arr[n] << " ";
    }
}