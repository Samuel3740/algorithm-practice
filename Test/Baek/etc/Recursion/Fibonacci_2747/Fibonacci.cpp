#include <iostream>
using namespace std;

int Fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;


    int num1 = 0, num2 = 1, tmp;

    for (int i = 2; i <= n; i++) {
        tmp = num1 + num2;
        num1 = num2;
        num2 = tmp;
    }
    return tmp;
}



int main() {
    int n;

    cin >> n;

    int result = Fibonacci(n);
    
    cout << result << endl;
    
    return 0;
}