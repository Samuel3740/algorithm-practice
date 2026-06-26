#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;
        }

        cout << N - 1 << "\n";
    }

    return 0;
}