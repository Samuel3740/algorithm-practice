#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int max_count = 0;
    string best_seller = "";
    string title;
    
    map<string, int> counts;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> title;

        counts[title]++;
    }

    for (auto const& [key, val] : counts) {
        if (val > max_count) {
            max_count = val;
            best_seller = key;
        }
    }
    cout << best_seller << "\n";

    return 0;
}