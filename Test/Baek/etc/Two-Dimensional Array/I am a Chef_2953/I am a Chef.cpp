#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int cnt  = 0;
    vector<vector<int>> arr(5, vector<int>(4));
    vector <int> sum(5);
    
    // int arr[5][4];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
            sum[i] += arr[i][j];
        }
    }
    
    int max_index = max_element(sum.begin(), sum.end()) - sum.begin();
    
    cout << max_index + 1 << " " << sum[max_index] << endl;

    return 0;
}