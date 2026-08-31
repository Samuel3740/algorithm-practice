#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    vector<bool> removed(my_string.size(), false);
    
    for (int index : indices) {
        removed[index] = true;
    }

    for (int i = 0; i < my_string.size(); i++) {
        if (!removed[i]) {
            answer += my_string[i];
        }
    }
    
    return answer;
}