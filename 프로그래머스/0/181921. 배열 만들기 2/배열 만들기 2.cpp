#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int i = l; i <= r; i++) {
        int n = i;
        bool ok = true;
        
        while (n > 0) { 
            int digit = n % 10;
            
            if (digit != 0 && digit != 5) {
                ok = false;
                break;
            }
            n /= 10;
        }
        
        if (ok) answer.push_back(i);
    }
    
    if (answer.empty()) answer.push_back(-1);
    
    return answer;
}