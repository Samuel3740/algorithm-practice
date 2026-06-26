#include <iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N - 1 - i; ++j){
            cout << " ";
        }
        for(int k = 0; k < 2*i + 1; ++k){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < N - 1; ++i){
        for(int j = 0; j < i + 1; ++j){
            cout << " ";
        }
        for(int k = 0; k < 2*(N - 2 - i) + 1; ++k){
            cout << "*";
        }

        cout << endl;
    }

}