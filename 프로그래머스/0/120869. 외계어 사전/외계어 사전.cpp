#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    string str = "";
    
    for (const string& s : spell) {
        str += s;
    }
    
    sort(str.begin(), str.end());

    for (string word : dic) {
        sort(word.begin(), word.end());
        
        if (word == str) {
            answer = 1;
            break;
        }
    }
    
    return answer;
}