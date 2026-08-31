#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int first = -1;
    int last = -1;
    
    vector<int> answer;
    

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    if (first == -1) {
        answer.push_back(-1);
    } else {
        for (int i = first; i <= last; i++) {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}