#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;

    for (char ch : myStr) {
        if (ch == 'a' || ch == 'b' || ch == 'c') {
            if (!temp.empty()) {
                answer.push_back(temp);
                temp.clear();
            }
        } else {
            temp += ch;
        }
    }

    if (!temp.empty()) {
        answer.push_back(temp);
    }

    if (answer.empty()) {
        answer.push_back("EMPTY");
    }
    
    return answer;
}