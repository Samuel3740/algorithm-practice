#include <iostream>
#include <vector>
using namespace std;

int simulate_game(int n, int p){
    vector<int> pebbles(n, 0); // 각 후보자가 가진 조약돌 수
    
    int bowl = p;              // 그릇에 있는 조약돌 수
    int current = 0;           // 현재 그릇을 가진 후보자 번호

    for(int step = 0; step < 1000000; ++step){
        if(bowl > 0){
            pebbles[current]++;
            bowl--;
        } 
        else{
            bowl = pebbles[current];
            pebbles[current] = 0;
        }

        // 종료 조건: bowl이 0이면서 나머지 후보가 pebble이 없는 경우
        bool game_end = (bowl == 0);
        for(int i = 0; i < n; ++i){
            if(i != current && pebbles[i] > 0){
                game_end = false;
                break;
            }
        }

        if(game_end){
            return current;
        }

        current = (current + 1) % n;
    }

    return -1;
}

int main(){
    int n, p;

    while(cin >> n >> p){
        if(n == 0 && p == 0){
            break;
        }

        int winner = simulate_game(n, p);

        cout << winner << endl;
    }
}