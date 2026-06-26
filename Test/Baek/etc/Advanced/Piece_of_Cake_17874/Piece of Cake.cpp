#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, h, v;

    cin >> n >> h >> v;

    int max_width = max(v, n - v);
    int max_height = max(h, n - h);

    int volume = max_width * max_height * 4;

    cout << volume << endl;
}