#include <iostream>
#include <string>
#include <vector>
using namespace std;

string fizzbuzz(long long i) {
    if (i % 15 == 0) return "FizzBuzz";
    if (i % 3 == 0) return "Fizz";
    if (i % 5 == 0) return "Buzz";
    return to_string(i);
}

long long parse(const string& s) {
    if (s == "Fizz" || s == "Buzz" || s == "FizzBuzz") return -1;
    return stoll(s);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a, b, c;
    cin >> a >> b >> c;

    vector<string> v = {a, b, c};


    long long base = -1;

    for (int j = 0; j < 3; j++) {
        long long n = parse(v[j]);

        if (n > 0) {
            base = n - j;  
            break;
        }
    }

    if (base > 0) {
        cout << fizzbuzz(base + 3) << endl;
    } else {
        for (long long start = 1; start <= 15; start++) {
            bool ok = true;
            
            for (int j = 0; j < 3; j++) {
                if (fizzbuzz(start + j) != v[j]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << fizzbuzz(start + 3) << endl;
                return 0;
            }
        }
    }

    return 0;
}