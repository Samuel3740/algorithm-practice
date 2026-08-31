#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (char c : myString) {
        if (c == 'a') {
            answer += 'A';
        } 
        else if (c >= 'B' && c <= 'Z') {
            answer += c + ('a' - 'A');
        } 
        else {
            answer += c;
        }
    }
    
    return answer;
}