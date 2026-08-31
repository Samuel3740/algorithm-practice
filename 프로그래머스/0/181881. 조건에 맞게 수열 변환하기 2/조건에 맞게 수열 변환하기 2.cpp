#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    while (true) {
        vector<int> next = arr;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                next[i] = arr[i] / 2;
            } 
            else if (arr[i] < 50 && arr[i] % 2 == 1) {
                next[i] = arr[i] * 2 + 1;
            }
        }

        if (arr == next) {
            return answer;
        }

        arr = move(next);
        ++answer;
    }
    
    return answer;
}