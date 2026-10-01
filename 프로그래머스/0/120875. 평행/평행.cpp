#include <string>
#include <vector>

using namespace std;

bool isParallel(const vector<int>& p1, const vector<int>& p2, const vector<int>& p3, const vector<int>& p4) {
    long long dy1 = p2[1] - p1[1];
    long long dx1 = p2[0] - p1[0];
    long long dy2 = p4[1] - p3[1];
    long long dx2 = p4[0] - p3[0];

    return (dy1 * dx2) == (dy2 * dx1);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    if (isParallel(dots[0], dots[1], dots[2], dots[3])) answer = 1;

    if (isParallel(dots[0], dots[2], dots[1], dots[3])) answer = 1;

    if (isParallel(dots[0], dots[3], dots[1], dots[2])) answer = 1;
    
    return answer;
}