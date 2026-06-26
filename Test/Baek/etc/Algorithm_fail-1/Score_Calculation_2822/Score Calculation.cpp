#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int total_score = 0;
    vector<int> problem_numbers;
    vector<pair<int, int>> scores(8);

    for (int i = 0; i < 8; i++) {
        cin >> scores[i].first;
        scores[i].second = i + 1;
    }
    sort(scores.begin(), scores.end(), greater<pair<int, int>>());


    for (int i = 0; i < 5; i++) {
        total_score += scores[i].first;
        problem_numbers.push_back(scores[i].second);
    }
    sort(problem_numbers.begin(), problem_numbers.end());

    cout << total_score << endl;

    for (int i = 0; i < 5; i++) {
        cout << problem_numbers[i] << (i == 4 ? "" : " ");
    }
    cout << endl;

    return 0;
}