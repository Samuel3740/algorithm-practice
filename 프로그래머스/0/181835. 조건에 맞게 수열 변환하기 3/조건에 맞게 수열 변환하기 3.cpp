#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for (int num : arr) {
        if (k % 2 == 1)
            answer.push_back(num * k);
        else
            answer.push_back(num + k);
    }
    
    return answer;
}