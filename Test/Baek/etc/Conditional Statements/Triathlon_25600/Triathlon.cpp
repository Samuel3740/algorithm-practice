#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, a, d, g;
    int max_score = 0;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> a >> d >> g;

        int score = a * (d + g);

        if(a == d + g){
            score *= 2;
        }

        max_score = max(max_score, score);
    }

    cout << max_score << endl;
}