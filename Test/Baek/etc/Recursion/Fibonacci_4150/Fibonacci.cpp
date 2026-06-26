#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sum(string a, string b) {
    int carry = 0;
    string result = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while (a.size() < b.size()) a.push_back('0');
    while (b.size() < a.size()) b.push_back('0');

    for (int i = 0; i < a.size(); ++i) {
        int digit_sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = digit_sum / 10;
        result.push_back(digit_sum % 10 + '0');
    }

    if (carry) result.push_back(carry + '0');

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int n;
    
    string a = "0";
    string b = "1";
    string c;

    cin >> n;

    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }

    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
        c = sum(a, b);
        a = b;
        b = c;
    }

    cout << b << endl;

    return 0;
}




/* 
#include <iostream>
using namespace std;

long long Fibonacci(int n){
    if (n == 0 || n ==1) return 1;


    long long num1 = 1, num2 = 1, tmp = 0;

    for (int i = 2; i <= n; i++) {
        tmp = num1 + num2;
        num1 = num2;
        num2 = tmp;
    }
    return tmp;
}



int main() {
    int n;

    cin >> n;

    long long result = Fibonacci(n);
    
    cout << result << endl;
    
    return 0;
}
*/