#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    answer = 2 * min(sides[0], sides[1]) - 1;
    
    return answer;
}