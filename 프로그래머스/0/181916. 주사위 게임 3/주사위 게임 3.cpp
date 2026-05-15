#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> cnt(7, 0);
    vector<int> PairNum;
    vector<int> SingleNum;
    
    int p = 0;
    int q = 0;
    int r = 0;
    int answer = 0;

    cnt[a]++;
    cnt[b]++;
    cnt[c]++;
    cnt[d]++;
    
     
    for (int i = 0; i < 7; i++) {
        if (cnt[i] == 4) return 1111 * i;
        else if (cnt[i] == 3) p = i;
        else if (cnt[i] == 2) PairNum.push_back(i);
        else if (cnt[i] == 1) SingleNum.push_back(i);
    }
    
    if (p != 0){
        int q = SingleNum[0];
        answer = pow(10 * p + q, 2);
    } else if (PairNum.size() == 2) {
        answer = (PairNum[0] + PairNum[1]) * abs(PairNum[0] - PairNum[1]);
    } else if (PairNum.size() == 1) {
        answer = SingleNum[0] * SingleNum[1];
    } else {
        answer = min({a, b, c, d});
    }
        
    return answer;
}