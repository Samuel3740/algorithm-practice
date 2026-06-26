#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count = 0;
    vector<int> arr(9);
    int max = arr[0];
    
    for(int i = 0; i < 9; ++i){
        cin >> arr[i];
    }
    
    for(int i = 0; i < 9; ++i){
        if(max < arr[i]){
            max = arr[i];
            count = i + 1;
        }
    }
    cout << max << endl;
    cout << count << endl;
}