#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int cnt = 0;
    
    for (int num : array) {
        string s = to_string(num);
        for (char c : s) {
            if (c == '7') {
                cnt += 1;
            }
        }
    }
    
    answer = cnt;
    
    return answer;
}