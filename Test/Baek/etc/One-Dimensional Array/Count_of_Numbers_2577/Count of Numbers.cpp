#include <iostream>
#include <vector>
using namespace std;

int main() {
    int mux = 1;
    vector<int> arr(3);
    vector<int> count(10, 0);

    for(int i = 0; i < 3; ++i){
        cin >> arr[i];
        mux *= arr[i];
    }
    
    while(mux > 0){
        count[mux % 10]++;
        mux /= 10;
    }
    
    for(int i = 0; i < 10; ++i){
        cout << count[i] << "\n";
    }
}
