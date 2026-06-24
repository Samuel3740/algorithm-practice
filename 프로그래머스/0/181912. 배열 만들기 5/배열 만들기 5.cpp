#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (string str : intStrs) {
        string part = str.substr(s, l);
        int num = stoi(part);  
        
        if (num > k) {
            answer.push_back(num);
        }
    }
    
    return answer;
}