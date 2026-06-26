#include <iostream>
using namespace std;

int main(){
    int M;
    cin >> M;

    int ball = 1;

    while(M--){
        int X, Y;
        cin >> X >> Y;

        if(ball == X) ball = Y;
        else if(ball == Y) ball = X;
    }

    cout << ball << endl;
    
    return 0;
}
