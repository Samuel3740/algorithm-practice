#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (count(begin(s), end(s), s[i]) == 1) {
            answer += s[i];
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}