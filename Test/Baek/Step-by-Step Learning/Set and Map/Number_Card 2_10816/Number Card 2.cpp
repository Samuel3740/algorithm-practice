#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N;

    vector<int> cards(N);
    unordered_map<int, int> cardCount;
    
    for(int i = 0; i < N; i++){
        cin >> cards[i];
        cardCount[cards[i]]++;
    }

    cin >> M;

    for(int i = 0; i < M; i++){
        int query;
        cin >> query;

        cout << cardCount[query];

        if(i < M - 1){
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}