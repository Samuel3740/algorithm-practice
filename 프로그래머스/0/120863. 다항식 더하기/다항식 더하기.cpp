#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string token;
    int x_cnt = 0;
    int num_cnt = 0;

    while (ss >> token) {
        if (token == "+") continue;

        if (token.back() == 'x') {
            if (token == "x") {
                x_cnt += 1;
            } else {
                x_cnt += stoi(token.substr(0, token.length() - 1));
            }
        } else {
            num_cnt += stoi(token);
        }
    }

    if (x_cnt > 0) {
        if (x_cnt == 1) {
            answer += "x";
        } else {
            answer += to_string(x_cnt) + "x";
        }
    }

    if (num_cnt > 0) {
        if (!answer.empty()) {
            answer += " + ";
        }
        answer += to_string(num_cnt);
    }
    
    return answer;
}