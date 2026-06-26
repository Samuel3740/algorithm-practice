#include <iostream>
using namespace std;


int factorial(int n) {
    int result = 1;

    if (n <= 1) return 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


int binomial(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int N, K;
    
    cin >> N >> K;
    
    cout << binomial(N, K) << endl;
    
    return 0;
}