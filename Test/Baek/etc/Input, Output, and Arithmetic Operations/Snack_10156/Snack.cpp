#include <iostream>
using namespace std;

int main(){
    int K, N, M;

    cin >> K >> N >> M;
    
    int total_cost = K * N;
    int needed_money = total_cost - M;
    
    if(needed_money < 0){
        needed_money = 0;
    }
    
    cout << needed_money << endl;
    
    return 0;
}