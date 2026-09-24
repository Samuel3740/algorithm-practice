#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string ss;
    
    ss = to_string(n);
    
    for (int i = 0; i < ss.size(); i++) {
        answer += ss[i] - '0'; 
    }
    /*
    while (n > 0) {
        answer += n % 10; 
        n /= 10;
    }
    */
    return answer;
}