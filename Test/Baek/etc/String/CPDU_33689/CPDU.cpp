#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int count = 0;

    cin >> N;

    for(int i = 0; i < N; ++i){
        string s;

        cin >> s;

        if(!s.empty() && s[0] == 'C'){
            count++;
        }
    }

    cout << count;
}