#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row = arr.size();
    int col = arr[0].size();

    if (row > col) {
        for (int i = 0; i < row; i++) {
            while (arr[i].size() < row) {
                arr[i].push_back(0);
            }
        }
    }
    else if (row < col) {
        while (arr.size() < col) {
            arr.push_back(vector<int>(col, 0));
        }
    }

    return arr;
}