#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    unordered_map<long long, int> mp;

    cin >> T;
    
    mp[232] = 2017;
    mp[88] = 2018;
    mp[754] = 2019;
    mp[29] = 2020;
    mp[28] = 2021;
    mp[1015] = 2022;
    mp[1295] = 2023;
    mp[1073] = 2024;
    mp[348] = 2025;

    while (T--) {
        int N;
        long long h = 1;

        cin >> N;
        cin.ignore(); 

        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            h *= (long long)s.size();
        }

        if (mp.count(h)) {
            cout << mp[h] << '\n';
        } else {
            cout << "Goodbye, ChAOS!\n";
        }
    }

    return 0;
}