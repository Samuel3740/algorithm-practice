#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    int size = 1;

    while (size < answer.size()) {
        size *= 2;
    }

    while (answer.size() < size) {
        answer.push_back(0);
    }

    return answer;
}