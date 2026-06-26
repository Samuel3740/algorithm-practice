#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Vocabulary_Study{
private:
    vector<int> frequency;  
    string input;
    int count = 0;

public:
    Vocabulary_Study() : frequency(26, 0){} 

    void InputData(){
        cin >> input;
        for (int i = 0; i < input.size(); ++i) {
            if (input[i] >= 'a' && input[i] <= 'z') {
                input[i] -= 'a' - 'A'; 
            }
        }
    }

    char Analyze(){
        for (char c : input){
            if (c >= 'A' && c <= 'Z'){ 
                frequency[c - 'A']++;   
            }
        }

        int MaxFreq = 0;
        int index = -1;

        for (int i = 0; i < 26; ++i){
            if (frequency[i] > MaxFreq){
                MaxFreq = frequency[i];
                index = i;
                count = 1;
            }
            else if (frequency[i] == MaxFreq){
                count++;
            }
        }
        return (count > 1) ? '?' : static_cast<char>(index + 'A');
    }
};

int main(){
    Vocabulary_Study study;
    study.InputData();
    cout << study.Analyze() << endl;
}