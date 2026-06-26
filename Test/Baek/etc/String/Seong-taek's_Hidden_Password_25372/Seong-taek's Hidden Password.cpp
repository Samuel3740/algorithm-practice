#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;

    cin >> N;

    vector<string> passwords(N);

    for(int i = 0; i < N; ++i){
        cin >> passwords[i];
    }

    for(int i = 0; i < N; ++i){
        if(passwords[i].length() >= 6 && passwords[i].length() <= 9){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }
    }

    return 0;
}