#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (char c : myString) {
        if ('a' <= c && c <= 'z') {
            c = c - 'a' + 'A';
        }
        answer += c;
    }
    
    return answer;
}