#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> count(200, 0);

    for (const auto& line : lines) {
        int start = line[0];
        int end = line[1];

        for (int i = start; i < end; ++i) {
            count[i + 100]++;
        }
    }

    for (int c : count) {
        if (c >= 2) {
            answer++;
        }
    }
    
    return answer;
}