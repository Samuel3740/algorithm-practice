#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count = 0;
    vector<int> arr(9);
    
    for(int i = 0; i < 9; ++i){
        cin >> arr[i];
    }
    
    int MaxValue = *max_element(arr.begin(), arr.end());
    
    for (int i = 0; i < 9; ++i) {
        if (arr[i] == MaxValue) {
            count = i + 1; 
            break; 
        }
    }
    
    cout << MaxValue << endl;
    cout << count << endl;
}