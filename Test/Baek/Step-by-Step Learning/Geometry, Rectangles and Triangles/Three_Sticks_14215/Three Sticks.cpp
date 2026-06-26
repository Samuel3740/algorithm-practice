#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int len[3] = {a, b, c};
    sort(len, len + 3); 

    while(len[2] >= len[0] + len[1]){
        len[2]--;
    }

    int perimeter = len[0] + len[1] + len[2];

    cout << perimeter << endl;

    return 0;
}