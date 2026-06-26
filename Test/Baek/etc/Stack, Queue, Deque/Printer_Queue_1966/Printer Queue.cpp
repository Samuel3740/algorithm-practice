#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        int N, M;
        int order = 0;  
        queue<pair<int,int>> q;
        priority_queue<int> pq;

        cin >> N >> M;

        for(int i = 0; i < N; i++){
            int p;
            cin >> p;
            q.push({p, i});
            pq.push(p);
        }

        while(!q.empty()){
            auto [value, index] = q.front();
            q.pop();

            if(pq.top() == value){
                pq.pop();
                order++;
                if(index == M){
                    cout << order << "\n";
                    break;
                }
            }
            else{
                q.push({value, index});
            }
        }
    }

    return 0;
}