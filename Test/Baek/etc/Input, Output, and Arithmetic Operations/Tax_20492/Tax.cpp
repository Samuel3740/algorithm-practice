#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int case1 = N * 78 / 100;
    int case2 = N - (N * 20 / 100 * 22 / 100);
    
    cout << case1 << " " << case2 << endl;
    
    return 0;
}