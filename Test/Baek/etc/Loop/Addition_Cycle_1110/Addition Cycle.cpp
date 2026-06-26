#include <iostream>
using namespace std;

int main() {
    int N, result;
    int cnt = 0;

    cin >> N;
    
    result = N;

    while(true){
        int a = result / 10;         
        int b = result % 10;          
        int sum = a + b;

        result = b * 10 + (sum % 10); 
        
        cnt++;

        if(result == N) break;       
    }

    cout << cnt << endl;

    return 0;
}
