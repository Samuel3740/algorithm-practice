#include <iostream>
using namespace std;

long Fact(long num){
    if(num < 1){
        return 1;
    }
    else{
        return num * Fact(num - 1);
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;

    cin >> n;
    
    cout << Fact(n) << '\n';
    
    return 0;
}