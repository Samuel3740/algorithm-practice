#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int sum = A + B;

    int digit_count = 0;
    while(sum > 0){
        digit_count++;
        sum /= 10;
    }

    cout << digit_count << endl;
    return 0;
}