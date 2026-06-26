#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;
    
    vector<int> x(n);


    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    
    vector<int> sorted_x = x;


    sort(sorted_x.begin(), sorted_x.end());
    sorted_x.erase(unique(sorted_x.begin(), sorted_x.end()), sorted_x.end());
    
    for(int i = 0; i < n; i++){
        int pos = lower_bound(sorted_x.begin(), sorted_x.end(), x[i]) - sorted_x.begin();
        cout << pos;

        if(i < n - 1){
            cout << " ";
        }
    }
    cout << "\n";
    
    return 0;
}