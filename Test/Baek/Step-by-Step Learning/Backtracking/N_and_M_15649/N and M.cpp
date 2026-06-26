#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> sequence;
bool used[9];


void backtrack(int depth){
    if(depth == M){
        for(int i = 0; i < M; i++){
            if(i > 0) cout << " ";
            cout << sequence[i];
        }
        cout << "\n";

        return;
    }
    
    for(int i = 1; i <= N; i++){
        if(!used[i]){
            used[i] = true;

            sequence.push_back(i);
            backtrack(depth + 1);
            sequence.pop_back();
            
            used[i] = false;
        }
    }
}


int main(){
    cin >> N >> M;

    backtrack(0);

    return 0;
}