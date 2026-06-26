#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr(5);
    int piece[5] = {1, 1, 2, 2, 2};
    
    for(int i = 0; i < 5; ++i){
        cin >> arr[i];        
    }

    for(int i = 0; i < 5; ++i){
        cout << piece[i] - arr[i] << " ";
    }    
}