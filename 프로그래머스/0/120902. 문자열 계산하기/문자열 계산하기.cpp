#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int num;
    int answer = 0;
    char op;
    
    stringstream ss(my_string);
    
    ss >> answer;
    
    while (ss >> op >> num) {
        if (op == '+') {
            answer += num;
        } else if (op == '-') {
            answer -= num;
        }
    }
    
    return answer;
}