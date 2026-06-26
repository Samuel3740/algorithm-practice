#include <iostream>
using namespace std;


int digit_sum(int num){
    int sum = 0;

    while(num > 0){
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(){
    int N;

    cin >> N;

    for(int i = 1; i < N; i++){
        if(i + digit_sum(i) == N){
            cout << i << endl;  
            system("pause");
            return 0;
        }
    }

    cout << 0 << endl;
    system("pause");

    return 0;
}