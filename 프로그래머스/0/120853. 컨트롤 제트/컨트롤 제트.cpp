#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    int prev = 0;
    string str;
    stringstream ss(s);
    
    while (ss >> str) {
        if (str == "Z") {
            answer -= prev;
        }
        else {
            prev = stoi(str);
            answer += prev;
        }
    }
    
    return answer;
}