#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    char fish[11][11];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> fish[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = m - 1; j >= 0; j--){
            cout << fish[i][j];
        }
        
        cout << "\n";
    }
    
    return 0;
}