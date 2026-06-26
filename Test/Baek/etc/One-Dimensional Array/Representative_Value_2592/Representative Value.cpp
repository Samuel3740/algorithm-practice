#include <iostream>
using namespace std;

int main() {
    int sum = 0, maxCount = 0, mode = 0;
    
    int numbers[10];
    int count[101] = {0, };

    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i];
        count[numbers[i] / 10]++;
    }
    
    int average = sum / 10;


    for (int i = 1; i <= 100; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mode = i * 10;
        }
    }
    cout << average << "\n";
    cout << mode << "\n";

    return 0;
}