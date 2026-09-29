#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();

    // 지뢰 주변 8방향
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    

    // 위험지역을 -1로 표시
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1) {
                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        if (board[ni][nj] == 0) {
                            board[ni][nj] = -1;
                        }
                    }
                }
            }
        }
    }

    // 0인 칸 = 안전지역
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0) {
                answer++;
            }
        }
    }

    return answer;
}