#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Vocabulary_Study{
private:
    vector<int> frequency;  
    string Input;
    int count = 0;

public:
    Vocabulary_Study() : frequency(26, 0){} 

    void TransformData(const string& Input){
        transform(Input.begin(), Input.end(), Input.begin(), ::toupper);
    }

    char Analyze(){
        for (char c : Input){           
            if (isalpha(c)){           
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
    string Input;
    cin >> Input;
    study.TransformData(Input);
    cout << study.Analyze() << endl;
}