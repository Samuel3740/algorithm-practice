#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.length() != 4 && s.length() != 6) {
        answer = false;
    } else {
        for (char c : s) {
            if (!isdigit(c)) {
                answer = false;
                break;
            }
        }
    }
    
    return answer;
}