#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = (B + B).find(A);
    return answer == string::npos ? -1 : answer;
    
    return answer;
}