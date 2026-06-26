#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long b, c;
    long long total = 0;

    cin >> n;
    
    vector<long long> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cin >> b >> c;
    
    for(int i = 0; i < n; i++){
        total++;

        long long remaining = a[i] - b;

        if(remaining > 0){
            total += (remaining + c - 1) / c;
        }
    }
    
    cout << total << endl;

    return 0;
}