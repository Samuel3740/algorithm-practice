#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s = to_string(n);
    
    for (int i = s.length() - 1; i >= 0; i--) {
        answer.push_back(s[i] - '0');
    }
    
    // while (n > 0) {
    //     answer.push_back(n % 10); 
    //     n /= 10;
    // }
    
    return answer;
}