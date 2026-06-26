#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int maxScore = -1;
    int minScore = 1001;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int score;
        cin >> score;

        maxScore = max(maxScore, score);
        minScore = min(minScore, score);
    }
    
    cout << maxScore - minScore << endl;
    
    return 0;
}