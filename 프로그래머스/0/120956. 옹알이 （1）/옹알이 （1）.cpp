#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (string s : babbling) {
        int i = 0;
        bool valid = true;

        while (i < s.length()) {
            if (s.substr(i, 3) == "aya") {
                i += 3;
            } else if (s.substr(i, 2) == "ye") {
                i += 2;
            } else if (s.substr(i, 3) == "woo") {
                i += 3;
            } else if (s.substr(i, 2) == "ma") {
                i += 2;
            } else {
                valid = false;
                break;
            }
        }

        if (valid) {
            answer++;
        }
    }
    
    return answer;
}