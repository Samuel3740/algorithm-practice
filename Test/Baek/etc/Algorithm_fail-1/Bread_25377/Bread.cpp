#include <iostream>
#include <algorithm>
#include <climits>  
using namespace std;

int main(){
    int n;
    int min_time = INT_MAX;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        
        if(a <= b){
            min_time = min(min_time, b);
        }
    }
    

    if(min_time == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << min_time << endl;
    }
    
    return 0;
}