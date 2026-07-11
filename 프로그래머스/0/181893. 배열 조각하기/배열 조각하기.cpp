#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    int left = 0;
    int right = arr.size() - 1;
    
    vector<int> answer;
    
    
    for (int i = 0; i < query.size(); i++) {
        if (i % 2 == 0)
            right = left + query[i];
        else
            left = left + query[i];
    }

    for (int i = left; i <= right; i++) {
        answer.push_back(arr[i]);
    }
    
    
    return answer;
}