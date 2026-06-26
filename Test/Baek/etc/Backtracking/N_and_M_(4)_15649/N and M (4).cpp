#include <iostream>
using namespace std;

int N, M;
int result[9];

void solve(int depth, int start) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << result[i] << " ";
		}
		cout << "\n";

		return;
	}

	for (int i = start; i <= N; i++) {
		result[depth] = i;

		solve(depth + 1, i);
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	solve(0, 1);

	return 0;
}