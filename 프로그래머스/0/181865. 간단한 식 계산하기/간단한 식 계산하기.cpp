#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    stringstream ss(binomial);
    int a, b;
    char op;
    
    ss >> a >> op >> b;
    
    if (op == '+')
        answer = a + b;
    else if (op == '-')
        answer = a - b;
    else
        answer = a * b;
    
    return answer;
}