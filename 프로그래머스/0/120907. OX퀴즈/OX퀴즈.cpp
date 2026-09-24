#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (const string& q : quiz) { // 하나의 문자열씩 끊어서 반복
        int X, Y, Z;
        string op, eq;
        stringstream ss(q);
        
        ss >> X >> op >> Y >> eq >> Z;
        
        int result = (op == "+") ? (X + Y) : (X - Y);
        
        if (result == Z) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }        
    }
    
    
    return answer;
}