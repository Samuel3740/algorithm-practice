#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    // 삼항연산자를 사용해서 하나의 for문으로 위, 아래 삼각형을 처리
    for(int i = 0; i < 2 * N - 1; ++i){
        int stars = i < N ? 2 * i + 1 : 2 * (2 * N - i - 2) + 1;
        int spaces = i < N ? N - i - 1 : i - N + 1;

        // 공백 출력
        for(int j = 0; j < spaces; ++j){
            cout << " ";
        }
        
        // 별 출력
        for(int j = 0; j < stars; ++j){
            cout << "*";
        }
        cout << endl;
    }
}