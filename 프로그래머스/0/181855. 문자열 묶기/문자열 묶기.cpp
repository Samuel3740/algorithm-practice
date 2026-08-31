#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> count(31, 0);
    
    for (const string& str : strArr) {
        count[str.length()]++;
        answer = max(answer, count[str.length()]);
    }
    
    return answer;
}