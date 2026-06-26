#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;

    cin >> t;

    vector<vector<long long>> v(t, vector<long long>(2));
    
    for(int i = 0; i < t; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < t; ++i){
        cout << v[i][0] + v[i][1] << "\n";
    }
    
    return 0;
}