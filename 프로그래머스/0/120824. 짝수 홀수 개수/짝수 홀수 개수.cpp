#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    vector<int> num(2, 0);
    
    for (int q : num_list) {
        if (q % 2 == 0) {
            num[0]++;
        } else {
            num[1]++;
        }
    }
    answer = num;
    
    return answer;
}