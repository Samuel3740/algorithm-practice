#include <iostream>
using namespace std;

void result(int x, int y){
    cout << x + y + 3;
}

int main(){
    int x, y;

    cin >> x >> y;

    result(x, y);
}