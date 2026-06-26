#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int i, j, N, M;
	cin >> N >> M;

	vector<int> arr(N);

	for (int n = 0; n < N; ++n){
        arr[n] = n + 1;
    }

	for (int n = 0; n < M; ++n)
	{
		cin >> i >> j;
		for (int k = 0; k <= (j - i) / 2; ++k)
		{
			int tmp = 0;
			tmp = arr[k + i - 1];
			arr[k + i - 1] = arr[j - k - 1];
			arr[j - k - 1] = tmp;
		}
	}
	for (int n = 0; n < N; ++n){
        cout << arr[n] << " ";
    }
}