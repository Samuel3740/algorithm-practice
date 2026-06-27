#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int n = my_string.length();
    int m = is_suffix.length();
    
    if (m > n) {
        return 0;
    }
    
    string suffix_candidate = my_string.substr(n - m, m);
    
    if (suffix_candidate == is_suffix) {
        answer = 1;
    }
    
    return answer;
}