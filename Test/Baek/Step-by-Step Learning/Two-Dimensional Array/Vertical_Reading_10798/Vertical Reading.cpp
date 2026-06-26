#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[5];
    
    for(int i = 0; i < 5; ++i){
        cin >> arr[i];
    }
    
    for(int j = 0; j < 15; ++j){
        for(int i = 0; i < 5; ++i){
            if(arr[i].length() > j){
                cout << arr[i][j]; // arr[i]라는 단어 내에서 j번째 문자에 접근하는 방법
            }
        }
    }
}