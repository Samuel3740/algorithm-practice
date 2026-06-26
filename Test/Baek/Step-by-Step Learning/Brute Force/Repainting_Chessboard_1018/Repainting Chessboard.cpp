#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int  cnt = INT_MAX;
char MAP[50][50];

void check(int x, int y)
{
    int tempcnt = 0;
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((i + j) % 2 != 0){
                if (MAP[x][y] == MAP[x + i][y + j]) tempcnt++;
            }
            else{
                if (MAP[x][y] != MAP[x + i][y + j]) tempcnt++;
            }
        }
    }

    if (tempcnt > 32) tempcnt = 64 - tempcnt;

    cnt = min(cnt, tempcnt);
}


int main(){
    int N, M;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> MAP[i][j];
        }
    }


    for(int i = 0; i <= N - 8; i++){
        for(int j = 0; j <= M - 8; j++){
            check(i, j);
        }
    }
    
    cout << cnt << endl;

    return 0;
}