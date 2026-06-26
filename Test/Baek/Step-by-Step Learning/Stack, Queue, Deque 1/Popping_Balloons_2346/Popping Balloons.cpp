#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    deque<pair<int, int>> dq;

    for(int i = 1; i <= N; i++){
        int value;
        cin >> value;
        dq.push_back({i, value});
    }
    
    while(!dq.empty()){
        auto current = dq.front();
        dq.pop_front();
        cout << current.first;
        
        if(dq.empty()) break;
        cout << " ";
        
        int move = current.second;

        if(move > 0){
            for(int i = 0; i < move - 1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{
            for(int i = 0; i < -move; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    
    cout << "\n";
    
    return 0;
}