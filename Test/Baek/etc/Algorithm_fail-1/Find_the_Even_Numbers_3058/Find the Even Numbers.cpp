#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    
    while(T--){
        vector<int> evens;

        for(int i = 0; i < 7; i++){
            int num;
            cin >> num;

            if(num % 2 == 0){
                evens.push_back(num);
            }
        }
        
        int sum = 0;
        int minVal = evens[0];

        for(int even : evens){
            sum += even;

            if(even < minVal){
                minVal = even;
            }
        }
        
        cout << sum << " " << minVal << endl;
    }
    
    return 0;
}