#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int maxFreq = 0;
    long long sum = 0;
    vector<int> modes;
    map<int, int> freq;

    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    for (int x : v){
        sum += x;
    }
    cout << (int)round((double)sum / n) << "\n";
    cout << v[n / 2] << "\n";
    
    for (int x : v){
        freq[x]++;
    }
    
    for (auto& p : freq){
        maxFreq = max(maxFreq, p.second);
    }
    
    for (auto& p : freq){
        if (p.second == maxFreq) modes.push_back(p.first);
    }

    cout << (modes.size() == 1 ? modes[0] : modes[1]) << "\n";
    cout << v[n - 1] - v[0] << "\n";
    
    return 0;
}