#include <iostream>
using namespace std;

int main() {
    int N, width, height;
    int total = 0;

    cin >> N;

    for(int i = 0; i < N; ++i){

        cin >> width >> height;

        if(width == 136 && height == 68){
            total += 1000;
        }
        else if(width == 142 && height == 68){
            total += 5000;
        }
        else if(width == 148 && height == 68){
            total += 10000;
        }
        else if(width == 154 && height == 68){
            total += 50000;
        }
    }

    cout << total << endl;

}
