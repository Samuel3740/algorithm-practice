#include <iostream>
#include <algorithm>
using namespace std;

int main(){    
    int N, M, K;
    cin >> N >> M >> K;
    
    int front_O = M;
    int front_X = N - M;
    int back_O = K;
    int back_X = N - K;
    
    int match_O = min(front_O, back_O);
    int match_X = min(front_X, back_X);
    
    cout << match_O + match_X << endl;
    
    return 0;
}