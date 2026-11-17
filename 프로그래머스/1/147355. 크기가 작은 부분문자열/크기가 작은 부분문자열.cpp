#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long pNum = stoll(p);
    int len = p.length();
    
    for (int i = 0; i <= t.length() - len; i++) {
        long long subNum = stoll(t.substr(i, len));
        if (subNum <= pNum) {
            answer++;
        }
    }
    
    return answer;
}