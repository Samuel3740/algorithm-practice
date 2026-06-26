#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    int cnt = 0;

    cin >> N >> M;

    unordered_set<string> std_set;
    string str;

    for(int i = 0; i < N; ++i){
        cin >> str;
        std_set.insert(str);
    }

    for(int i = 0; i < M; ++i){
        cin >> str;
        if (std_set.find(str) != std_set.end()){
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}
