#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int n = common.size();

    if (common[1] - common[0] == common[2] - common[1]) {
        int diff = common[1] - common[0];
        answer = common[n - 1] + diff;
    } else {
        int ratio = common[1] / common[0];
        answer = common[n - 1] * ratio;
    }
    
    return answer;
}