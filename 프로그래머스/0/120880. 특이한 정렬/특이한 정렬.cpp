#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer = numlist;
    
    sort(answer.begin(), answer.end(), [n](int a, int b) {
        int distA = abs(a - n);
        int distB = abs(b - n);
        
        if (distA == distB) {
            return a > b;
        }
        
        return distA < distB;
    });
        
    return answer;
}