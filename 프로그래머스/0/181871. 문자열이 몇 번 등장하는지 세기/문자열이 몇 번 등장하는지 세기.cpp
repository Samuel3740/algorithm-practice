#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for (int i = 0; i + pat.size() <= myString.size(); i++) {
        if (myString.substr(i, pat.size()) == pat) {
            answer++;
        }
    }
    
    return answer;
}