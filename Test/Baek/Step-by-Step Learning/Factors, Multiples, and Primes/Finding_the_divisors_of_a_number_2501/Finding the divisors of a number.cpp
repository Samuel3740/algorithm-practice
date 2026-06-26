#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, K;

    cin >> N >> K;

    vector<int> divisors;

    // 약수 저장 
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            divisors.push_back(i);
        }
    }

    // N번쨰 약수 출력
    if(K <= divisors.size()){
        cout << divisors[K - 1] << endl;
    } 
    else{
        cout << 0 << endl;
    }

}
