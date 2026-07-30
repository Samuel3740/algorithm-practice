#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (char c : myString) {
        if (c >= 'A' && c <= 'Z') {
            c += 'a' - 'A';
        }
        answer += c;
    }

    
    return answer;
}