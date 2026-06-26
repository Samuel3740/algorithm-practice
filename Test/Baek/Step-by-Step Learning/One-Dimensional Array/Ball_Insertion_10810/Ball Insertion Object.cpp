#include <iostream>
#include <vector>
using namespace std;

class Ball_Insertion{
private:
    int N, M;
    vector<int> arr;

public:
    void InputData(){
        cin >> N >> M;
        arr.resize(N, 0);
    }

    void ChangeSetting(){
        for (int n = 0; n < M; ++n){
            int i, j, k;
            cin >> i >> j >> k;
            for (int u = i - 1; u < j; ++u){
                arr[u] = k;
            }
        }
    }

    void Print(){
        for (int n = 0; n < N; ++n){
            cout << arr[n] << " ";
        }
        cout << endl;
    }
};

int main(){
    Ball_Insertion A;
    A.InputData();
    A.ChangeSetting();
    A.Print();
}