#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    int total = N * 100;
    
    if(total >= M){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}