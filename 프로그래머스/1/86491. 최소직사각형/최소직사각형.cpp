#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_w = 0;
    int max_h = 0;

    for (const auto& card : sizes) {
        int w = max(card[0], card[1]);
        int h = min(card[0], card[1]);

        max_w = max(max_w, w);
        max_h = max(max_h, h);
    }

    answer = max_w * max_h;
    
    return answer;
}