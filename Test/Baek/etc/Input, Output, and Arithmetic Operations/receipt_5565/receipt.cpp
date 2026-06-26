#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i = 10;
    int sum = 0;

    vector<int> arr(i);

    while(i--){
        cin >> arr[i];
    }

    for(int i = 0; i < 9; ++i){
        sum += arr[i];
    }
    
    cout << arr[9] - sum;
}