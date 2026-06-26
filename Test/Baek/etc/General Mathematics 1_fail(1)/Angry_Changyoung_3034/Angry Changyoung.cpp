#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, W, H;
    cin >> N >> W >> H;

    double diagonal = sqrt((double)W * W + (double)H * H);

    for(int i = 0; i < N; i++){
        int L;
        cin >> L;

        cout << (L <= diagonal ? "DA" : "NE") << "\n";
    }

    return 0;
}