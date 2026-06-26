#include <iostream>
#include <string>
using namespace std;

int main(){
    int L;
    
    cin >> L;

    for(int i = 0; i < L; ++i){
        int N;
        char ch;
        
        cin >> N >> ch;

        for (int j = 0; j < N; ++j){
            cout << ch;
        }
        cout << '\n'; 
    }
}