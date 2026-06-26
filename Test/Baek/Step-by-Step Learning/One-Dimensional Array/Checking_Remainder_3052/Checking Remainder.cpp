#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count = 0;
    vector<int> arr(10);
    vector<int> n(42, false);
    
    for(int i = 0; i < 10; ++i){
        cin >> arr[i];
        int remainder = arr[i] % 42; 

        if(!n[remainder]){
            n[remainder] = true;
            count += 1;
        }
    }
    cout << count << endl;    
}