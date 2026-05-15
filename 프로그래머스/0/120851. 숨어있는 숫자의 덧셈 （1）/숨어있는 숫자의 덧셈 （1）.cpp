#include <iostream>
#include <string>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for (char c : my_string) {
        if (c >= '1' && c <= '9') {
            answer += c - '0';
        }
    }
    
    return answer;
}