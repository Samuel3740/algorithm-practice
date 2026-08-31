#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    vector<bool> visited(100001, false);

    for (int x : arr) {
        if (!visited[x]) {
            visited[x] = true;
            answer.push_back(x);

            if (answer.size() == k)
                break;
        }
    }

    while (answer.size() < k) {
        answer.push_back(-1);
    }
    
    return answer;
}