#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    long long outlets = 1;

    cin >> n;
    
    vector<long long> plugs(n);

    for(int i = 0; i < n; i++){
        cin >> plugs[i];
    }
    
    sort(plugs.begin(), plugs.end(), greater<long long>());
    
    for(int i = 0; i < n; i++){
        if(outlets > 0){
            outlets--;          
            outlets += plugs[i]; 
        }
        else{
            break;
        }
    }
    
    cout << outlets << endl; 
    
    return 0;
}