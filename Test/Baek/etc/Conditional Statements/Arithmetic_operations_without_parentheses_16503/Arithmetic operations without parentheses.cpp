#include <iostream>
#include <algorithm>
using namespace std;

int calc(int a, char op, int b){
    if(op == '+'){
        return a + b;
    }
    if(op == '-'){
        return a - b;
    }
    if(op == '*'){
        return a * b;
    }
    if(op == '/'){
        if((a < 0 && b > 0) || (a > 0 && b < 0)){
            return - (abs(a) / abs(b));
        }
        else{
            return abs(a) / abs(b);
        }
    }
    return 0; 
}

int main(){
    int K1, K2, K3;
    char O1, O2;
    
    cin >> K1 >> O1 >> K2 >> O2 >> K3;

    int result1, result2;


    int first = calc(K1, O1, K2);
    result1 = calc(first, O2, K3);


    int second = calc(K2, O2, K3);
    result2 = calc(K1, O1, second);

    cout << min(result1, result2) << '\n';
    cout << max(result1, result2) << '\n';

    return 0;
}