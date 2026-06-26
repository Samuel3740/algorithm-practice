#include <iostream>
using namespace std;

int main(){
    long long n;

    cin >> n;

    long long count = (n * (n - 1) * (n - 2)) / 6;

    cout << count << "\n";
    cout << 3 << "\n"; 

    return 0;
}