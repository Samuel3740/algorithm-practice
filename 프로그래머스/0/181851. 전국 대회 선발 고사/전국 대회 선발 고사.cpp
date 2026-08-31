#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> students;

    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) {
            students.push_back({rank[i], i});
        }
    }

    sort(students.begin(), students.end());

    int a = students[0].second;
    int b = students[1].second;
    int c = students[2].second;

    answer = 10000 * a + 100 * b + c;
    
    return answer;
}