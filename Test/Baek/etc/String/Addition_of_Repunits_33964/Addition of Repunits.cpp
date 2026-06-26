#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y;

    cin >> x >> y;

    string a(x, '1');
    string b(y, '1');

    long long num1 = stoll(a);
    long long num2 = stoll(b);

    cout << num1 + num2 << endl;

    return 0;
}