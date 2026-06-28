#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    
    if (is_prefix.length() <= my_string.length() && my_string.substr(0, is_prefix.length()) == is_prefix) {
        answer = 1;
    }
    
    return answer;
}