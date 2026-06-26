#include <iostream>
using namespace std;

int main(){
    long long n, m;
    long long diag1_attack = 0;
    long long diag2_attack = 0;

    cin >> n >> m;

    long long row_attack = n * (m * (m - 1) / 2);
    long long col_attack = m * (n * (n - 1) / 2);


    for(long long d = -(m - 1); d <= n - 1; ++d){
        long long count = 0;

        if(d >= 0){
            count = min(n - d, m);
        } 
        else{
            count = min(n, m + d);
        }

        if(count >= 2){
            diag1_attack += count * (count - 1) / 2;
        }
    }

    for(long long d = 0; d <= n + m - 2; ++d){
        long long row_start = max(0LL, d - m + 1);
        long long row_end = min(n - 1, d);
        long long count = row_end - row_start + 1;

        if(count >= 2){
            diag2_attack += count * (count - 1) / 2;
        }
    }

    long long answer = row_attack + col_attack + diag1_attack + diag2_attack;

    cout << answer << '\n';
}
