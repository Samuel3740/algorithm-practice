#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int i = 0; i < strArr.size(); i++) {
        if (i % 2 == 0) {
            for (char& ch : strArr[i]) {
                ch = tolower(ch);
            }
        } else {
            for (char& ch : strArr[i]) {
                ch = toupper(ch);
            }
        }
        answer.push_back(strArr[i]);
    }
    
    return answer;
}