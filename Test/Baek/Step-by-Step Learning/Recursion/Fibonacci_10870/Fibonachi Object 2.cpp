#include <iostream>
using namespace std;

int Fibonacci(int num){
    int result;
    int a = 0, b = 1;
    
    if (num == 0){
        return 0;
    }
    if (num == 1){
        return 1;
    }

    for (int i = 2; i <= num; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main(){
    int num;
    
    cin >> num;
    
    cout << Fibonacci(num);
}