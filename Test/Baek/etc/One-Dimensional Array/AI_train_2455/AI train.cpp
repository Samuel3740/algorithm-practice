#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<pair<int, int>> stations(4);
    
    for(int i = 0; i < 4; i++){
        cin >> stations[i].first >> stations[i].second;
    }
    
    int current_passengers = 0;
    int max_passengers = 0;
    
    for(int i = 0; i < 4; i++){
        current_passengers -= stations[i].first;
        current_passengers += stations[i].second;
        max_passengers = max(max_passengers, current_passengers);
    }
    
    cout << max_passengers << endl;
    
    return 0;
}