#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int i = 0;
    string answer = "";
    
    while (n_str[i] == '0') {
        i++;
    }
    answer = n_str.substr(i);
    
    return answer;
}