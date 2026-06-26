#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    long long ans = 0;

    cin >> n;

    vector<int> ropes(n);

    for(int i = 0; i < n; i++){
        cin >> ropes[i];
    }

    sort(ropes.begin(), ropes.end(), greater<int>());

    
    for(int i = 0; i < n; i++){
        long long w = (long long)ropes[i] * (i + 1);

        ans = max(ans, w);
    }

    cout << ans << endl;
    
    return 0;
}