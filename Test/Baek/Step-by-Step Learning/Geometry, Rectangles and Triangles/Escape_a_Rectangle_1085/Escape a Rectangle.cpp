#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y, w, h, min_dist;

    cin >> x >> y >> w >>h;
    
    min_dist = min({x, y, w - x, h - y});

    cout << min_dist << endl;

    return 0;
}