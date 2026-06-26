#include <iostream>
using namespace std;

const int MAX = 100;

int main(){
	int matrix[MAX][MAX] = {0};

	int N, M;
	cin >> N >> M;

	for (int n = 0; n < 2; ++n){       // 총 2개의 배열을 입력받음  
		for (int i = 0; i < N; ++i){
			for (int j = 0; j < M; ++j){
				int num;
				cin >> num;
				matrix[i][j] += num;   // 총 두번 입력 받는 중 i, j에 의해 겹치는 matrix 값을 더함
			}
		}
	}

	for (int i = 0; i < N; ++i){
		for (int j = 0; j < M; ++j){
			cout << matrix[i][j] << " ";}
		cout << endl;
	}
}