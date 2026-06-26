#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int maxFreq = 0;
    int count = 0;
    char result = '?';

    string input;
    cin >> input;
    vector<int> frequency(26, 0);

    for (int i = 0; i < input.size(); ++i){
        if (input[i] >= 'a' && input[i] <= 'z'){
            input[i] -= 'a' - 'A';
        }
    }

    for (char c : input){
        if (c >= 'A' && c <= 'Z'){
            frequency[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; ++i){
        if (frequency[i] > maxFreq){
            maxFreq = frequency[i];
            result = i + 'A';
            count = 1;
        } 
        else if (frequency[i] == maxFreq){
            count++;
        }
    }

    if (count > 1){
        result = '?';
    }
    cout << result << endl;
}