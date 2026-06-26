#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x, y;
    int total = 0;
    
    vector<int> time(4); 

    for(int i = 0; i < 4; ++i){
        cin >> time[i];
        total += time[i];
    }

    x = total / 60;
    y = total % 60;

    cout << x << '\n';
    cout << y;
}