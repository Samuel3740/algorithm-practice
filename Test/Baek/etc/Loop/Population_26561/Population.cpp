#include <iostream>
using namespace std;

int main(){
    int n;
    long long p, t, births, deaths, result;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> p >> t;

        births = t / 4;
        deaths = t / 7;
        result = p + births - deaths;

        cout << result << '\n';
    }
}
