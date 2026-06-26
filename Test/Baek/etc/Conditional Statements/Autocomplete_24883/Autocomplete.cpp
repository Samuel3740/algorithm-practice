#include <iostream>
using namespace std;

int main(){
    char str;

    cin >> str;

    if(str == 'N' || str == 'n'){
        cout << "Naver D2" << endl;
    } 
    else{
        cout << "Naver Whale" << endl;
    }

    return 0;
}