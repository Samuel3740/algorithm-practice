#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for (string row : picture) {
        string temp = "";

        for (char c : row) {
            for (int i = 0; i < k; i++) {
                temp += c;
            }
        }

        for (int i = 0; i < k; i++) {
            answer.push_back(temp);
        }
    }
    
    return answer;
}