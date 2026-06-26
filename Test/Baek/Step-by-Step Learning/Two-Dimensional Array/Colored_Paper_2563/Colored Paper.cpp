#include <iostream>
using namespace std;

int main(){
    bool paperlocation[100][100] = {false};
    int N, x, y;
    int total_size = 0;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> x >> y;

        for(int dx = 0; dx < 10; ++dx){
            for(int dy = 0; dy < 10; ++dy){
                if(!paperlocation[x + dx][y + dy]){ 
                    paperlocation[x + dx][y + dy] = true;
                    total_size++;
                }
            }
        }
    }

    cout << total_size << endl;
}