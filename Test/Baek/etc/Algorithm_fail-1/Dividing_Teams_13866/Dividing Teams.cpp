#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[4];

    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }

    int ans = abs((a[0] + a[1]) - (a[2] + a[3]));

    ans = min(ans, abs((a[0] + a[2]) - (a[1] + a[3])));
    ans = min(ans, abs((a[0] + a[3]) - (a[1] + a[2])));

    cout << ans << endl;

    return 0;
}