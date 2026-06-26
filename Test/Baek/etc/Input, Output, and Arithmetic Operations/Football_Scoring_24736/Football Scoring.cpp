#include <iostream>
using namespace std;

int main(){
    int T1, F1, S1, P1, C1;
    int T2, F2, S2, P2, C2;
    
    cin >> T1 >> F1 >> S1 >> P1 >> C1;
    cin >> T2 >> F2 >> S2 >> P2 >> C2;
    
    int score1 = T1 * 6 + F1 * 3 + S1 * 2 + P1 * 1 + C1 * 2;
    int score2 = T2 * 6 + F2 * 3 + S2 * 2 + P2 * 1 + C2 * 2;
    
    cout << score1 << " " << score2 << endl;
    
    return 0;
}