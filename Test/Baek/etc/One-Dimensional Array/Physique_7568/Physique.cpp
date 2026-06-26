#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;

    cin >> n;
    
    vector<int> weight(n), height(n);

    for(int i = 0; i < n; i++){
        cin >> weight[i] >> height[i];
    }
    
    for(int i = 0; i < n; i++){
        int rank = 1;

        for(int j = 0; j < n; j++){
            if(weight[j] > weight[i] && height[j] > height[i]){
                rank++;
            }
        }
        cout << rank;

        if (i < n - 1) cout << " ";
    }

    cout << endl;
    
    return 0;
}