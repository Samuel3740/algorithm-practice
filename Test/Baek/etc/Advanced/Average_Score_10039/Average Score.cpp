#include <iostream>
using namespace std;

int main() {
    int score, average;
    int sum = 0;
    

    for (int i = 0; i < 5; i++) {

        cin >> score;

        if (score < 40) {
            score = 40;
        }

        sum += score;
    }

    average = sum / 5;
    
    cout << average << endl;

    return 0;
}