#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (const auto& cmd : commands) {
        vector<int> temp(array.begin() + cmd[0] - 1, array.begin() + cmd[1]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[cmd[2] - 1]);
    }
    
    return answer;
}