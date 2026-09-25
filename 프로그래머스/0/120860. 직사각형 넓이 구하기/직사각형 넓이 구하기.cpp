#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int min_x = min({dots[0][0], dots[1][0], dots[2][0], dots[3][0]});
    int max_x = max({dots[0][0], dots[1][0], dots[2][0], dots[3][0]});
    
    int min_y = min({dots[0][1], dots[1][1], dots[2][1], dots[3][1]});
    int max_y = max({dots[0][1], dots[1][1], dots[2][1], dots[3][1]});
    
    answer = (max_x - min_x) * (max_y - min_y);
    
    return answer;
}