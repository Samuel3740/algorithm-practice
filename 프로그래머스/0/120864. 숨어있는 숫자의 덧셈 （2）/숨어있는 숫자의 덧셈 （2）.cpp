#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";

    for (char c : my_string) {
        if (isdigit(c)) {
            num += c;
        } else if (!num.empty()) {
            answer += stoi(num);
            num = "";
        }
    }

    if (!num.empty()) {
        answer += stoi(num);
    }
    
    return answer;
}