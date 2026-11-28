#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;unordered_map<string, int> scores;

    for (size_t i = 0; i < name.size(); ++i) {
        scores[name[i]] = yearning[i];
    }

    for (const auto& p : photo) {
        int sum = 0;
        for (const auto& person : p) {
            auto it = scores.find(person);
            if (it != scores.end()) {
                sum += it->second;
            }
        }
        answer.push_back(sum);
    }
    
    return answer;
}