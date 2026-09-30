#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0;
    int y = 0;
    
    int x_limit = board[0] / 2;
    int y_limit = board[1] / 2;

    for (const string& key : keyinput) {
        int nx = x;
        int ny = y;

        if (key == "up") ny += 1;
        else if (key == "down") ny -= 1;
        else if (key == "left") nx -= 1;
        else if (key == "right") nx += 1;

        if (nx >= -x_limit && nx <= x_limit && ny >= -y_limit && ny <= y_limit) {
            x = nx;
            y = ny;
        }
    }

    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}