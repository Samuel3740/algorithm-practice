#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){
    int n, m;
    int count = 0;
    
    cin >> n >> m;
    
    vector<vector<int>> graph(n + 1);
    
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    vector<bool> visited(n + 1, false);
    queue<int> q;
    
    q.push(1);
    visited[1] = true;

    
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        
        for(int next : graph[curr]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}