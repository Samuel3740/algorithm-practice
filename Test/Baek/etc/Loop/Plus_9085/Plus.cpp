#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int N;
        cin >> N;
        
        int sum = 0;
        for(int i = 0; i < N; i++){
            int num;
            cin >> num;

            sum += num;
        }
        
        cout << sum << '\n';
    }
    
    return 0;
}