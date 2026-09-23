#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string s = to_string(num);
    
    int index = s.find(to_string(k));
    
    answer = index + 1;
    
    if(index == string::npos){
        answer = -1;
    }
    
    return answer;
}