#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    int total = 0;

    cin >> n;
    vector<int> price(n);

    for(int i = 0; i < n; i++){
        cin >> price[i];
    }
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;

        total += price[b - 1];
    }
    
    cout << total << endl;
}