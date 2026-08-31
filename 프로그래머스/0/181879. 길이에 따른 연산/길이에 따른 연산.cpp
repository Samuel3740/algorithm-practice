#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = (num_list.size() >= 11) ? 0 : 1;

    for (int num : num_list) {
        if (num_list.size() >= 11) {
            answer += num;
        } else {
            answer *= num;
        }
    }

    return answer;
}